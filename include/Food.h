#ifndef FOOD_H
#define FOOD_H

#include "Product.h"

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