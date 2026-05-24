#ifndef ORDERITEM_H
#define ORDERITEM_H

#include "Product.h"

class OrderItem {
public:
    Product* product;
    int quantity;

    OrderItem(Product* product, int quantity);
    double getSubtotal() const;
};

#endif