#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H

#include "Cart.h"
#include "Order.h"

class OrderService {
private:
    int orderId = 1;

public:
    Order validateCart(Cart& cart);
};

#endif
