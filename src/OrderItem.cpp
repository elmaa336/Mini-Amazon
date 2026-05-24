#include "OrderItem.h"

OrderItem::OrderItem(Product* product, int quantity) {
    this->product = product;
    this->quantity = quantity;
}

double OrderItem::getSubtotal() const {
    return product->getPrice() * quantity;
}