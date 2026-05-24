#ifndef PRODUCT_H
#define PRODUCT_H

<<<<<<< HEAD
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
=======
<<<<<<< HEAD
#include <string>
#include <iostream>

class Product {
private:
=======
#include <iostream>
#include <string>

class Product
{
protected: 
>>>>>>> a8f02140433f838923f2890ac3f778ea639c2842
    int id;
    std::string name;
    double price;
    int stock;
<<<<<<< HEAD

public:
    Product(int id, std::string name, double price, int stock);
=======
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
>>>>>>> a8f02140433f838923f2890ac3f778ea639c2842

    int getId() const;
    std::string getName() const;
    double getPrice() const;
    int getStock() const;
<<<<<<< HEAD

    void reduceStock(int quantity);
    void addStock(int quantity);
    bool isAvailable(int quantity) const;

    void display() const;
};

#endif
=======
    std::string getCategory() const;

    void setPrice(double newPrice);
    void setStock(int newStock);

    virtual void displayProduct() const = 0;
    virtual double similarityScore() const = 0;
};

#endif
>>>>>>> a8f02140433f838923f2890ac3f778ea639c2842
>>>>>>> origin/main
