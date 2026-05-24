#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "Product.h"

<<<<<<< HEAD
class Electronics : public Product {
public:
    std::string brand;
    
    Electronics(std::string n, double p, std::string b) : Product(n, p), brand(b) {}
    
    std::string getBrand() const { return brand; }
    
    double similarityScore(const Cart& cart) const override;
};

#endif
=======
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
>>>>>>> origin/main
