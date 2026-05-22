#ifndef FOOD_H
#define FOOD_H

#include "Product.h"

class Food : public Product {
public:
    std::string category;
    
    Food(std::string n, double p, std::string c) : Product(n, p), category(c) {}
    
    std::string getCategory() const { return category; }
    
    double similarityScore(const Cart& cart) const override;
};

#endif
