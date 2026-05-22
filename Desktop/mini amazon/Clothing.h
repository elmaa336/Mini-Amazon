#ifndef CLOTHING_H
#define CLOTHING_H

#include "Product.h"

class Clothing : public Product {
public:
    std::string style;
    
    Clothing(std::string n, double p, std::string s) : Product(n, p), style(s) {}
    
    std::string getStyle() const { return style; }
    
    double similarityScore(const Cart& cart) const override;
};

#endif
