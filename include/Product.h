#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product
{
protected: 
    int id;
    std::string name;
    double price;
    int stock;
    std::string category; 

public:
    Product(int id,
            const std::string& name,
            double price,
            int stock,
            const std::string& category);

    Product(int i, std::string n, double p, int s)
        : id(i), name(n), price(p), stock(s), category("General") {}

    virtual ~Product();

    int getId() const;
    std::string getName() const;
    double getPrice() const;
    int getStock() const;
    std::string getCategory() const;

    void setPrice(double newPrice);
    void setStock(int newStock);

    virtual void displayProduct() const = 0;
    virtual double similarityScore() const = 0;
};

#endif
