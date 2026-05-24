#include <iostream>
#include <vector>
#include <string>
#include "Pricing.h" //Pricing file

// MOCK CLASSES (To simulate 1 and  3) ---
class Product {
public:
    std::string name;
    double price;
    Product(std::string n, double p) : name(n), price(p) {}
    virtual ~Product() {}
    virtual double similarityScore(const class Cart& cart) const = 0;
};

class Electronics : public Product {
public:
    std::string brand;
    Electronics(std::string n, double p, std::string b) : Product(n, p), brand(b) {}
    double similarityScore(const class Cart& cart) const override {
        return 10.0; // Simplified for this test
    }
};

class Cart {
private:
    std::vector<Product*> items;
public:
    void add(Product* p) { items.push_back(p); }
    const std::vector<Product*>& getProducts() const { return items; }
    double getSubtotal() const {
        double sum = 0;
        for (auto* i : items) sum += i->price;
        return sum;
    }
};

// --- MAIN TEST ENGINE ---
int main() {
    // 1. Setup the Scene
    Cart myCart;
    
    // 2 Add some items (Simulating Person 3's work)
    Electronics* laptop = new Electronics("MacBook", 1200.0, "Apple");
    Electronics* phone = new Electronics("iPhone", 800.0, "Apple");
    
    myCart.add(laptop);
    myCart.add(phone);

    double subtotal = myCart.getSubtotal();

    // 3. Test YOUR Pricing Logic (Part 1)
    std::cout << "========================================" << std::endl;
    std::cout << "       E-COMMERCE PRICING TEST          " << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Subtotal:       " << subtotal << " DH" << std::endl;
    std::cout << "TVA (20%):      " << subtotal * Pricing::TVA_RATE << " DH" << std::endl;
    std::cout << "Discount:      -" << Pricing::calculateDiscount(subtotal) << " DH" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "TOTAL TO PAY:   " << Pricing::calculateFinalTotal(subtotal) << " DH" << std::endl;
    std::cout << "========================================\n" << std::endl;

    // 4. Test YOUR Recommendation Logic (Part 2)
    std::cout << "Checking Recommendation Engine..." << std::endl;
    // In a real run, this would loop through the catalog.
    // For now, we confirm the similarity hook is reachable.
    double score = laptop->similarityScore(myCart);
    std::cout << "Similarity Score for Laptop: " << score << " (Success!)" << std::endl;

    // Cleanup memory
    delete laptop;
    delete phone;

    return 0;
}