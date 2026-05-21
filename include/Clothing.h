#ifndef CLOTHING_H
#define CLOTHING_H

#include "Product.h"

class Clothing : public Product
{
private:
    std::string size;

public:
    Clothing(int id,
             const std::string& name,
             double price,
             int stock,
             const std::string& size);

    void displayProduct() const override;

    double similarityScore() const override;
};

#endif