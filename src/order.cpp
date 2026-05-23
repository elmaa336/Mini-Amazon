#include "Order.h"
#include <iostream>

using namespace std;

Order::Order(int i, Client c, vector<Product*> p, double t)
    : id(i), client(c), products(p), total(t) {}

void Order::display() const {
    cout << "\n--- ORDER ---\n";
    cout << "Order ID: " << id << endl;
    cout << "Client: " << client.getName() << endl;
    cout << "Total: " << total << endl;

    cout << "Products:\n";
    for (auto p : products) {
        cout << "- " << p->getName() << endl;
    }
}