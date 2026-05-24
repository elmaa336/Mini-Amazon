#include "Product.h"

Product::Product(int id, std::string name, double price, int stock) 
    : id(id), name(name), price(price), stock(stock) {}

int Product::getId() const { return id; }
std::string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
int Product::getStock() const { return stock; }

void Product::reduceStock(int quantity) { stock -= quantity; }
void Product::addStock(int quantity) { stock += quantity; }

bool Product::isAvailable(int quantity) const {
    return stock >= quantity;
}

void Product::display() const {
    std::cout << "ID: " << id
              << " | Name: " << name
              << " | Price: " << price
              << " | Stock: " << stock << std::endl;

    if (stock <= 2) {
        std::cout << "⚠ Low Stock Alert!" << std::endl;
    }
}