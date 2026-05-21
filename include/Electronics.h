#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "Product.h"

class Electronics : public Product
{
private:
    int warrantyMonths;

public:
    Electronics(int id,
                const std::string& name,
                double price,
                int stock,
                int warrantyMonths);

    void displayProduct() const override;

    double similarityScore() const override;
};

#endif