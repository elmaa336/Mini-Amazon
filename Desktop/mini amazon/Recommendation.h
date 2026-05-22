#ifndef RECOMMENDATION_H
#define RECOMMENDATION_H

#include <vector>
#include "Product.h" 
#include "Cart.h"    

class Recommendation {
public:
    
    static Product* suggestBest(const std::vector<Product*>& catalog, const Cart& cart) {
        Product* best = nullptr;
        double maxScore = -1.0;

        for (Product* p : catalog) {
            double score = p->similarityScore(cart); // Polymorphic call
            if (score > maxScore) {
                maxScore = score;
                best = p;
            }
        }
        return best;
    }
};

#endif