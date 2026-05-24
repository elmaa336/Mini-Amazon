#include <memory>

#include "../include/Catalog.h"
#include "../include/Clothing.h"
#include "../include/Electronics.h"
#include "../include/Food.h"

int main()
{
    Catalog catalog;

    auto laptop = std::make_shared<Electronics>(
        1,
        "Gaming Laptop",
        1500.0,
        10,
        24);

    auto apple = std::make_shared<Food>(
        2,
        "Apple",
        2.5,
        100,
        7);

    auto tshirt = std::make_shared<Clothing>(
        3,
        "T-Shirt",
        29.99,
        50,
        "L");

    catalog.addProduct(laptop);
    catalog.addProduct(apple);
    catalog.addProduct(tshirt);

    catalog.displayCatalog();

    return 0;
}