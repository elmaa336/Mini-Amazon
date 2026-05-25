#include "Clothing.h"
#include "Cart.h"
#include <iostream>

Clothing::Clothing(int id,
                   const std::string& name,
                   double price,
                   int stock,
                   const std::string& style)
    : Product(id, name, price, stock, "Clothing"),
      style(style)
{
}

void Clothing::displayProduct() const
{
    std::cout << "\n===== Clothing Product =====\n";
    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Price: $" << price << '\n';
    std::cout << "Stock: " << stock << '\n';
    std::cout << "Style: " << style << '\n';
}

double Clothing::similarityScore(const Cart& cart) const
{
    double score = 0;
    for (auto item : cart.getProducts()) {
        Clothing* c = dynamic_cast<Clothing*>(item);
        if (c != nullptr && c->getStyle() == this->style) {
            score += 7.0;
        }
    }
    return score;
}

const std::string& Clothing::getStyle() const
{
    return style;
}
