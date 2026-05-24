#include "../include/Clothing.h"

Clothing::Clothing(int id,
                   const std::string& name,
                   double price,
                   int stock,
                   const std::string& size)
    : Product(id, name, price, stock, "Clothing"),
      size(size)
{
}

void Clothing::displayProduct() const
{
    std::cout << "\n===== Clothing Product =====\n";
    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Price: $" << price << '\n';
    std::cout << "Stock: " << stock << '\n';
    std::cout << "Size: " << size << '\n';
}

double Clothing::similarityScore() const
{
    return 0.75;
}