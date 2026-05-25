#ifndef CART_H
#define CART_H

#include <vector>
#include "Product.h"

class Cart {
private:
    std::vector<Product*> products;

public:
    void addProduct(Product* p);
    std::vector<Product*>& getProducts();
    const std::vector<Product*>& getProducts() const;
    double getSubtotal() const;
    void showCart() const;
    void clear();
};

#endif

