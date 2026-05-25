#include "OrderService.h"

Order OrderService::validateCart(Cart& cart) {
    Order order;

    for (auto p : cart.getProducts()) {
        order.addItem(p, 1);
    }

    cart.clear();
    return order;
}
