#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H

#include "Cart.h"
#include "Order.h"
using namespace std;

class OrderService {
private:
    int orderId = 1;

public:
    Order validateCart(Cart& cart, Client& client) {
        double total = 0;

        for (auto p : cart.getProducts()) {
            total += p->getPrice();
        }

        Order order(orderId++, client, cart.getProducts(), total);

        for (auto p : cart.getProducts()) {
            p->setStock(p->getStock() - 1);
        }

        cart.clear();

        return order;
    }
};

#endif