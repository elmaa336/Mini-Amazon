#include "../include/Product.h"

Product::Product(int id,
                 const std::string& name,
                 double price,
                 int stock,
                 const std::string& category)
    : id(id),
      name(name),
      price(price),
      stock(stock),
      category(category)
{
}

Product::~Product()
{
}

int Product::getId() const
{
    return id;
}

std::string Product::getName() const
{
    return name;
}

double Product::getPrice() const
{
    return price;
}

int Product::getStock() const
{
    return stock;
}

std::string Product::getCategory() const
{
    return category;
}

void Product::setPrice(double newPrice)
{
    price = newPrice;
}

void Product::setStock(int newStock)
{
    stock = newStock;
}