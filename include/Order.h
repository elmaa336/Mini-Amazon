#ifndef ORDER_H
#define ORDER_H

#include <vector>
<<<<<<< HEAD
#include <string>
#include "OrderItem.h"

class Order {
private:
    std::vector<OrderItem> items;
    std::string status;

public:
    Order();
    void addItem(Product* product, int quantity);
    double calculateSubtotal() const;
    double calculateTVA() const;
    double calculateTotal() const;
    void validateOrder();
    void updateStatus(std::string newStatus);
    void displayOrder() const;
    void generateReport() const;
=======
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
>>>>>>> a8f02140433f838923f2890ac3f778ea639c2842
};

#endif