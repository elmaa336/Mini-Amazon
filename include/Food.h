#ifndef FOOD_H
#define FOOD_H

#include "Product.h"

<<<<<<< HEAD
class Food : public Product {
public:
    std::string category;
    
    Food(std::string n, double p, std::string c) : Product(n, p), category(c) {}
    
    std::string getCategory() const { return category; }
    
    double similarityScore(const Cart& cart) const override;
};

#endif
=======
class Food : public Product
{
private:
    int expirationDays;

public:
    Food(int id,
         const std::string& name,
         double price,
         int stock,
         int expirationDays);

    void displayProduct() const override;

    double similarityScore() const override;
};

#endif
>>>>>>> origin/main
