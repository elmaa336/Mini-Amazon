#ifndef FOOD_H
#define FOOD_H

#include "Product.h"
#include <string>

class Food : public Product
{
private:
    std::string foodCategory;
    int expirationDays;

public:
    Food(int id,
         const std::string& name,
         double price,
         int stock,
         const std::string& foodCategory,
         int expirationDays);

    void displayProduct() const override;
    double similarityScore(const Cart& cart) const override;
    const std::string& getFoodCategory() const;
};

#endif

