#ifndef CLOTHING_H
#define CLOTHING_H

#include "Product.h"
#include <string>

class Clothing : public Product
{
private:
    std::string style;

public:
    Clothing(int id,
             const std::string& name,
             double price,
             int stock,
             const std::string& style);

    void displayProduct() const override;
    double similarityScore(const Cart& cart) const override;
    const std::string& getStyle() const;
};

#endif

