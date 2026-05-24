#include "../include/Food.h"

Food::Food(int id,
           const std::string& name,
           double price,
           int stock,
           int expirationDays)
    : Product(id, name, price, stock, "Food"),
      expirationDays(expirationDays)
{
}

void Food::displayProduct() const
{
    std::cout << "\n===== Food Product =====\n";
    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Price: $" << price << '\n';
    std::cout << "Stock: " << stock << '\n';
    std::cout << "Expiration: " << expirationDays << " days\n";
}

double Food::similarityScore() const
{
    return 0.6;
}