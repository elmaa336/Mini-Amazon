#include "../include/Electronics.h"

Electronics::Electronics(int id,
                         const std::string& name,
                         double price,
                         int stock,
                         int warrantyMonths)
    : Product(id, name, price, stock, "Electronics"),
      warrantyMonths(warrantyMonths)
{
}

void Electronics::displayProduct() const
{
    std::cout << "\n===== Electronics Product =====\n";
    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Price: $" << price << '\n';
    std::cout << "Stock: " << stock << '\n';
    std::cout << "Warranty: " << warrantyMonths << " months\n";
}

double Electronics::similarityScore() const
{
    return 0.9;
}