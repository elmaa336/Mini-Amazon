#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <string>
#include "OrderItem.h"

class Order {
private:
    std::vector<OrderItem> items;
    std::string status;

public:
    Order();
    void addItem(Product* product, int quantity);
    double calculateSubtotal() const;
    double calculateTVA() const;
    double calculateTotal() const;
    void validateOrder();
    void updateStatus(const std::string& newStatus);
    void displayOrder() const;
    void generateReport() const;
};

#endif
