<<<<<<< HEAD
 #ifndef CART_H
=======
#ifndef CART_H
>>>>>>> origin/main
#define CART_H

#include <vector>
#include "Product.h"

class Cart {
private:
<<<<<<< HEAD
    std::vector<Product*> items;
public:
    void add(Product* p) { items.push_back(p); }
    const std::vector<Product*>& getProducts() const { return items; }
    double getSubtotal() const {
        double sum = 0;
        for (auto* i : items) sum += i->price;
        return sum;
    }
};

#endif
=======
    vector<Product*> products;

public:
    void addProduct(Product* p);
    vector<Product*>& getProducts();
    void showCart() const;
    void clear();
};

#endif
>>>>>>> origin/main
