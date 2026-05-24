#ifndef CLOTHING_H
#define CLOTHING_H

#include "Product.h"

<<<<<<< HEAD
class Clothing : public Product {
public:
    std::string style;
    
    Clothing(std::string n, double p, std::string s) : Product(n, p), style(s) {}
    
    std::string getStyle() const { return style; }
    
    double similarityScore(const Cart& cart) const override;
};

#endif
=======
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
>>>>>>> origin/main
