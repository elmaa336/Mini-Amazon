#include "Order.h"
#include <iostream>

Order::Order() : status("Pending") {}

void Order::addItem(Product* product, int quantity) {
    if (!product->isAvailable(quantity)) {
        std::cout << "❌ Not enough stock for " << product->getName() << std::endl;
        return;
    }
    items.push_back(OrderItem(product, quantity));
    std::cout << "✅ Product added: " << product->getName() << std::endl;
}

double Order::calculateSubtotal() const {
    double subtotal = 0;
    for (const auto& item : items) {
        subtotal += item.getSubtotal();
    }
    return subtotal;
}

double Order::calculateTVA() const { return calculateSubtotal() * 0.20; }
double Order::calculateTotal() const { return calculateSubtotal() + calculateTVA(); }

void Order::validateOrder() {
    for (auto& item : items) {
        item.product->reduceStock(item.quantity);
    }
    status = "Validated";
    std::cout << "\n===== ORDER VALIDATED =====" << std::endl;
    std::cout << "Subtotal : " << calculateSubtotal() << std::endl;
    std::cout << "TVA (20%) : " << calculateTVA() << std::endl;
    std::cout << "Total : " << calculateTotal() << std::endl;
}

void Order::updateStatus(std::string newStatus) { status = newStatus; }

void Order::displayOrder() const {
    std::cout << "\n===== ORDER DETAILS =====" << std::endl;
    for (const auto& item : items) {
        std::cout << item.product->getName() << " x " << item.quantity 
                  << " = " << item.getSubtotal() << std::endl;
    }
    std::cout << "Status : " << status << std::endl;
}

void Order::generateReport() const {
    std::cout << "\n===== REPORT =====" << std::endl;
    std::cout << "Number of products : " << items.size() << std::endl;
    std::cout << "Order total : " << calculateTotal() << std::endl;
    std::cout << "Current status : " << status << std::endl;
}