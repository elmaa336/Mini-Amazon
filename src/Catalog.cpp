#include "Catalog.h"
#include <iostream>

void Catalog::addProduct(const std::shared_ptr<Product>& product)
{
    products.push_back(product);
}

void Catalog::displayCatalog() const
{
    for (const auto& product : products)
    {
        product->displayProduct();
    }
}
