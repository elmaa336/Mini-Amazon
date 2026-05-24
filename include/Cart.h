 #ifndef CART_H
#define CART_H

#include <vector>
#include "Product.h"

class Cart {
private:
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
