#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Order.h"

class Client {
private:
    int id;
    std::string nom; 
    std::string email;
    std::vector<Order> historiqueCommandes;

public:
    Client();
    Client(int id, std::string nom, std::string email);
    Client(std::string n) : id(0), nom(n), email("unknown@email.com") {}

    int getId() const;
    std::string getNom() const;
    std::string getEmail() const;
    std::string getName() const { return nom; }

    void setNom(std::string nom);
    void setEmail(std::string email);

    void ajouterCommande(const Order& commande);
    void afficherClient() const;
    void afficherHistorique() const;
};

#endif
