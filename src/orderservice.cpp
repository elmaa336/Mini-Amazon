#include "OrderService.h"

Order OrderService::validateCart(Cart& cart, Client& client) {

    double total = 0;

    for (auto p : cart.getProducts()) {
        total += p->getPrice();
    }

    Order order(orderId++, client, cart.getProducts(), total);

    for (auto p : cart.getProducts()) {
        if (p->getStock() > 0)
            p->setStock(p->getStock() - 1);
    }

    cart.clear();

    return order;
}