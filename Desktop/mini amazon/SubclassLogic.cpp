#include "Product.h"
#include "Cart.h"
#include "Electronics.h"
#include "Food.h"
#include "Clothing.h"


// ELECTRONICS: Similarity based on Brand
double Electronics::similarityScore(const Cart& cart) const {
    double score = 0;
    for (auto item : cart.getProducts()) {
        // Check if the product in the cart is an Electronics item
        Electronics* e = dynamic_cast<Electronics*>(item);
        if (e != nullptr) {
            if (e->getBrand() == this->brand) {
                score += 10.0; 
            }
        }
    }
    return score;
}

// FOOD: Similarity based on Category
double Food::similarityScore(const Cart& cart) const {
    double score = 0;
    for (auto item : cart.getProducts()) {
        // Check if the product in the cart is a Food item
        Food* f = dynamic_cast<Food*>(item);
        if (f != nullptr) {
            if (f->getCategory() == this->category) {
                score += 5.0; 
            }
        }
    }
    return score;
}

// 3. CLOTHING: Similarity based on Style
double Clothing::similarityScore(const Cart& cart) const {
    double score = 0;
    for (auto item : cart.getProducts()) {
        // Check if the product in the cart is a Clothing item
        Clothing* c = dynamic_cast<Clothing*>(item);
        if (c != nullptr) {
            if (c->getStyle() == this->style) {
                score += 7.0; 
            }
        }
    }
    return score;
}