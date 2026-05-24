#include "Product.h"
#include "Order.h"
#include <iostream>

int main() {
    // 1. Initialize Products
    Product p1(1, "Laptop", 1200, 5);
    Product p2(2, "Phone", 800, 2);
    Product p3(3, "Headphones", 100, 10);

    // 2. Display Initial Stock
    p1.display();
    p2.display();
    p3.display();

    // 3. Create and Process Order
    Order order;
    order.addItem(&p1, 1);
    order.addItem(&p2, 2);

    order.displayOrder();
    order.validateOrder();
    order.updateStatus("Shipped");
    order.generateReport();

    // 4. Display Final Stock
    std::cout << "\n===== UPDATED STOCK =====" << std::endl;
    p1.display();
    p2.display();
    p3.display();

    return 0;
}