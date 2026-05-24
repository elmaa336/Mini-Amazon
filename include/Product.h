#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product {
private:
    int id;
    std::string name;
    double price;
    int stock;

public:
    Product(int id, std::string name, double price, int stock);

    int getId() const;
    std::string getName() const;
    double getPrice() const;
    int getStock() const;

    void reduceStock(int quantity);
    void addStock(int quantity);
    bool isAvailable(int quantity) const;

    void display() const;
};

#endif