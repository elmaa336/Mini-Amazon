#include "../include/Catalog.h"

void Catalog::addProduct(const std::shared_ptr<Product>& product)
{
    products.push_back(product);
}

void Catalog::displayCatalog() const
{
    for (const auto& product : products)
    {
        product->displayProduct();

        std::cout << "Similarity Score: "
                  << product->similarityScore()
                  << "\n";
    }
}