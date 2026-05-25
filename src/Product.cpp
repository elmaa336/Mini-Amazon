#include "Product.h"
#include <iostream>

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

Product::Product(int id,
                 const std::string& name,
                 double price,
                 int stock)
    : Product(id, name, price, stock, "General")
{
}

Product::~Product() = default;

int Product::getId() const
{
    return id;
}

const std::string& Product::getName() const
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

const std::string& Product::getCategory() const
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

void Product::reduceStock(int quantity)
{
    if (quantity > 0 && stock >= quantity) {
        stock -= quantity;
    }
}

void Product::addStock(int quantity)
{
    if (quantity > 0) {
        stock += quantity;
    }
}

bool Product::isAvailable(int quantity) const
{
    return quantity > 0 && stock >= quantity;
}

