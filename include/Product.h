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

    virtual ~Product();

    // Getters
    int getId() const;
    std::string getName() const;
    double getPrice() const;
    int getStock() const;
    std::string getCategory() const;

    // Setters
    void setPrice(double newPrice);
    void setStock(int newStock);

    // Polymorphism
    virtual void displayProduct() const = 0;

    // Future recommendation engine
    virtual double similarityScore() const = 0;
};

#endif