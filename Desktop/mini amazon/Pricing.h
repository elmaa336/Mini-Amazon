#ifndef PRICING_H
#define PRICING_H

class Pricing {
public:
    static constexpr double TVA_RATE = 0.20; // 20% Tax

    // Calculates the final total including tax and discounts
    static double calculateFinalTotal(double subtotal) {
        double discount = calculateDiscount(subtotal);
        double totalWithTax = subtotal * (1.0 + TVA_RATE);
        return totalWithTax - discount;
    }

    // Logic for discounts: 10% if > 1000 DH, 5% if > 500 DH
    static double calculateDiscount(double amount) {
        if (amount > 1000) return amount * 0.10;
        if (amount > 500)  return amount * 0.05;
        return 0.0;
    }
};

#endif