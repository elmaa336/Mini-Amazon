#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "Product.h"
#include "Client.h"
using namespace std;

class Order {
private:
    int id;
    Client client;
    vector<Product*> products;
    double total;

public:
    Order(int i, Client c, vector<Product*> p, double t)
        : id(i), client(c), products(p), total(t) {}

    void display() {
        cout << "\nORDER\n";
        cout << "Client: " << client.getName() << endl;
        cout << "Total: " << total << endl;

        for (auto p : products) {
            cout << "- " << p->getName() << endl;
        }
    }
};

#endif