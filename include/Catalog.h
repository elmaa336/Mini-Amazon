#ifndef CATALOG_H
#define CATALOG_H

#include <memory>
#include <vector>

#include "Product.h"

class Catalog
{
private:
    std::vector<std::shared_ptr<Product>> products;

public:
    void addProduct(const std::shared_ptr<Product>& product);

    void displayCatalog() const;
};

#endif