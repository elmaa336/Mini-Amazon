#include "Order.h"
#include <iostream>

using namespace std;

Order::Order() : status("Pending") {}

void Order::addItem(Product* product, int quantity) {

    if (!product->isAvailable(quantity)) {

        cout << "❌ Not enough stock for "
             << product->getName() << endl;

        return;
    }

    items.push_back(OrderItem(product, quantity));

    cout << "✅ Product added: "
         << product->getName() << endl;
}

double Order::calculateSubtotal() const {

    double subtotal = 0;

    for (const auto& item : items) {
        subtotal += item.getSubtotal();
    }

    return subtotal;
}

double Order::calculateTVA() const {

    return calculateSubtotal() * 0.20;
}

double Order::calculateTotal() const {

    return calculateSubtotal() + calculateTVA();
}

void Order::validateOrder() {

    for (auto& item : items) {
        item.product->reduceStock(item.quantity);
    }

    status = "Validated";

    cout << "\n===== ORDER VALIDATED =====" << endl;

    cout << "Subtotal : "
         << calculateSubtotal() << endl;

    cout << "TVA (20%) : "
         << calculateTVA() << endl;

    cout << "Total : "
         << calculateTotal() << endl;
}

void Order::updateStatus(string newStatus) {

    status = newStatus;
}

void Order::displayOrder() const {

    cout << "\n===== ORDER DETAILS =====" << endl;

    for (const auto& item : items) {

        cout << item.product->getName()
             << " x "
             << item.quantity
             << " = "
             << item.getSubtotal()
             << endl;
    }

    cout << "Status : "
         << status << endl;
}

void Order::generateReport() const {

    cout << "\n===== REPORT =====" << endl;

    cout << "Number of products : "
         << items.size() << endl;

    cout << "Order total : "
         << calculateTotal() << endl;

    cout << "Current status : "
         << status << endl;
}
