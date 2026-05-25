#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "Product.h"
#include <string>

class Electronics : public Product
{
private:
    std::string brand;
    int warrantyMonths;

public:
    Electronics(int id,
                const std::string& name,
                double price,
                int stock,
                const std::string& brand,
                int warrantyMonths);

    void displayProduct() const override;
    double similarityScore(const Cart& cart) const override;
    const std::string& getBrand() const;
};

#endif

