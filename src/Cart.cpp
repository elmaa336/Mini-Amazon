#include "Cart.h"
#include <iostream>

using namespace std;

void Cart::addProduct(Product* p) {
    if (p->getStock() > 0)
        products.push_back(p);
    else
        cout << "Out of stock: " << p->getName() << endl;
}

vector<Product*>& Cart::getProducts() {
    return products;
}

const std::vector<Product*>& Cart::getProducts() const {
    return products;
}

double Cart::getSubtotal() const {
    double sum = 0.0;
    for (auto p : products) {
        sum += p->getPrice();
    }
    return sum;
}

void Cart::showCart() const {
    cout << "\n--- CART ---\n";

    if (products.empty()) {
        cout << "Cart is empty\n";
        return;
    }

    for (auto p : products) {
        cout << p->getName() << " - " << p->getPrice() << endl;
    }
}

void Cart::clear() {
    products.clear();
}