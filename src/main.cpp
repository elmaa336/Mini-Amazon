#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <limits>
#include <iomanip>

#include "Cart.h"
#include "Catalog.h"
#include "Client.h"
#include "OrderService.h"
#include "Pricing.h"
#include "Recommendation.h"
#include "Clothing.h"
#include "Electronics.h"
#include "Food.h"

static void printReceipt(const Order& order, double discount)
{
    std::cout << "\n===== FINAL RECEIPT =====\n";
    order.displayOrder();
    std::cout << "Discount : " << discount << " DH\n";
    std::cout << "Total due : " << order.calculateTotal() - discount << " DH\n";
}

int main()
{
    Catalog catalog;
    Cart cart;

    // Inventory maintained here so we can search by ID
    std::vector<std::shared_ptr<Product>> inventory;

    inventory.push_back(std::make_shared<Electronics>(1, "Gaming Laptop", 1500.0, 5, "BrandX", 24));
    inventory.push_back(std::make_shared<Electronics>(2, "Smartphone", 900.0, 3, "BrandX", 12));
    inventory.push_back(std::make_shared<Food>(3, "Apple", 2.5, 20, "Fruit", 7));
    inventory.push_back(std::make_shared<Clothing>(4, "Jeans", 79.99, 10, "Denim"));

    for (auto &p : inventory) catalog.addProduct(p);

    std::cout << "Welcome to Mini-Amazon Console Store\n";
    std::cout << "Please enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    if (name.empty()) { std::getline(std::cin, name); }

    std::cout << "Please enter your email: ";
    std::string email;
    std::getline(std::cin, email);
    if (email.empty()) { std::getline(std::cin, email); }

    Client client(1, name, email);

    auto findById = [&](int id) -> Product* {
        for (auto &sp : inventory) {
            if (sp->getId() == id) return sp.get();
        }
        return nullptr;
    };

    auto showCatalog = [&]() {
        std::cout << "\n=== CATALOG ===\n";
        catalog.displayCatalog();
    };

    auto safeReadInt = [&]() -> int {
        int v;
        while (!(std::cin >> v)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input, please enter a number: ";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return v;
    };

    bool running = true;
    while (running) {
        std::cout << "\n=== MAIN MENU ===\n";
        std::cout << "1) View Catalog\n";
        std::cout << "2) Add to Cart\n";
        std::cout << "3) View Cart\n";
        std::cout << "4) Get Recommendations\n";
        std::cout << "5) Checkout & Finalize\n";
        std::cout << "6) Exit\n";
        std::cout << "Choose an option: ";

        int choice = safeReadInt();

        switch (choice) {
            case 1:
                showCatalog();
                break;

            case 2: {
                std::cout << "Enter Product ID to add: ";
                int id = safeReadInt();
                Product* prod = findById(id);
                if (!prod) { std::cout << "Product ID not found.\n"; break; }

                std::cout << "Enter quantity: ";
                int qty = safeReadInt();
                if (qty <= 0) { std::cout << "Quantity must be positive.\n"; break; }

                if (!prod->isAvailable(qty)) {
                    std::cout << "Not enough stock. Available: " << prod->getStock() << "\n";
                    break;
                }

                for (int i=0;i<qty;++i) cart.addProduct(prod);
                std::cout << "Added " << qty << " x " << prod->getName() << " to cart.\n";
                break;
            }

            case 3: {
                std::cout << "\n=== YOUR CART ===\n";
                cart.showCart();
                std::cout << "Subtotal: " << std::fixed << std::setprecision(2) << cart.getSubtotal() << " DH\n";
                break;
            }

            case 4: {
                std::vector<Product*> raw;
                for (auto &s : inventory) raw.push_back(s.get());
                Product* rec = Recommendation::suggestBest(raw, cart);
                if (rec) std::cout << "Recommended: " << rec->getName() << " (ID=" << rec->getId() << ")\n";
                else std::cout << "No recommendation available.\n";
                break;
            }

            case 5: {
                if (cart.getProducts().empty()) { std::cout << "Cart is empty.\n"; break; }

                double subtotal = cart.getSubtotal();
                double discount = Pricing::calculateDiscount(subtotal);

                OrderService service;
                Order order = service.validateCart(cart);

                std::cout << "\n--- CHECKOUT ---\n";
                printReceipt(order, discount);

                order.validateOrder(); // reduces stock
                order.updateStatus("Shipped");
                client.ajouterCommande(order);

                std::cout << "Checkout complete. Thank you, " << client.getName() << "!\n";
                break;
            }

            case 6:
                running = false;
                break;

            default:
                std::cout << "Unknown option. Try again.\n";
        }
    }

    std::cout << "Goodbye!\n";
    return 0;
}
