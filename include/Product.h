#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Cart;

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
    Product(int id,
            const std::string& name,
            double price,
            int stock);
    virtual ~Product();

    int getId() const;
    const std::string& getName() const;
    double getPrice() const;
    int getStock() const;
    const std::string& getCategory() const;

    void setPrice(double newPrice);
    void setStock(int newStock);
    void reduceStock(int quantity);
    void addStock(int quantity);
    bool isAvailable(int quantity) const;

    virtual void displayProduct() const = 0;
    virtual double similarityScore(const Cart& cart) const = 0;
};

#endif

