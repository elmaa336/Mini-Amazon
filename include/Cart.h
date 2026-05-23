#ifndef CART_H
#define CART_H

#include <vector>
#include "Product.h"

class Cart {
private:
    vector<Product*> products;

public:
    void addProduct(Product* p);
    vector<Product*>& getProducts();
    void showCart() const;
    void clear();
};

#endif