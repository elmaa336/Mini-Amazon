#include "Food.h"
#include "Cart.h"
#include <iostream>

Food::Food(int id,
           const std::string& name,
           double price,
           int stock,
           const std::string& foodCategory,
           int expirationDays)
    : Product(id, name, price, stock, "Food"),
      foodCategory(foodCategory),
      expirationDays(expirationDays)
{
}

void Food::displayProduct() const
{
    std::cout << "\n===== Food Product =====\n";
    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Category: " << foodCategory << '\n';
    std::cout << "Price: $" << price << '\n';
    std::cout << "Stock: " << stock << '\n';
    std::cout << "Expiration: " << expirationDays << " days\n";
}

double Food::similarityScore(const Cart& cart) const
{
    double score = 0;
    for (auto item : cart.getProducts()) {
        Food* f = dynamic_cast<Food*>(item);
        if (f != nullptr && f->getFoodCategory() == this->foodCategory) {
            score += 5.0;
        }
    }
    return score;
}

const std::string& Food::getFoodCategory() const
{
    return foodCategory;
}
