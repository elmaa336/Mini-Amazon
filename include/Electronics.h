#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "Product.h"

class Electronics : public Product {
public:
    std::string brand;
    
    Electronics(std::string n, double p, std::string b) : Product(n, p), brand(b) {}
    
    std::string getBrand() const { return brand; }
    
    double similarityScore(const Cart& cart) const override;
};

#endif
