#include "Electronics.h"
#include "Cart.h"
#include <iostream>

Electronics::Electronics(int id,
                         const std::string& name,
                         double price,
                         int stock,
                         const std::string& brand,
                         int warrantyMonths)
    : Product(id, name, price, stock, "Electronics"),
      brand(brand),
      warrantyMonths(warrantyMonths)
{
}

void Electronics::displayProduct() const
{
    std::cout << "\n===== Electronics Product =====\n";
    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Brand: " << brand << '\n';
    std::cout << "Price: $" << price << '\n';
    std::cout << "Stock: " << stock << '\n';
    std::cout << "Warranty: " << warrantyMonths << " months\n";
}

double Electronics::similarityScore(const Cart& cart) const
{
    double score = 0;
    for (auto item : cart.getProducts()) {
        Electronics* e = dynamic_cast<Electronics*>(item);
        if (e != nullptr && e->getBrand() == this->brand) {
            score += 10.0;
        }
    }
    return score;
}

const std::string& Electronics::getBrand() const
{
    return brand;
}
