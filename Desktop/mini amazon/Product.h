#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Cart; // Forward declaration

class Product {
public:
    std::string name;
    double price;
    
    Product(std::string n, double p) : name(n), price(p) {}
    virtual ~Product() {}
    virtual double similarityScore(const Cart& cart) const = 0;
};

#endif
