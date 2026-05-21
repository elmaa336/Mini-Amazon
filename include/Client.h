#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <vector>
#include "Order.h"

using namespace std;

class Client {
private:
    int id;
    string nom;
    string email;
    vector<Order> historiqueCommandes;

public:
    Client();
    Client(int id, string nom, string email);

    int getId() const;
    string getNom() const;
    string getEmail() const;

    void setNom(string nom);
    void setEmail(string email);

    void ajouterCommande(const Order& commande);
    void afficherClient() const;
    void afficherHistorique() const;
};

#endif