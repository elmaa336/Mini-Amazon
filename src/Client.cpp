#include "Client.h"
#include <iostream>

Client::Client() {
    id = 0;
    nom = "";
    email = "";
}

Client::Client(int id, std::string nom, std::string email) {
    this->id = id;
    this->nom = nom;
    this->email = email;
}

int Client::getId() const {
    return id;
}

std::string Client::getNom() const {
    return nom;
}

std::string Client::getEmail() const {
    return email;
}

void Client::setNom(std::string nom) {
    this->nom = nom;
}

void Client::setEmail(std::string email) {
    this->email = email;
}

void Client::ajouterCommande(const Order& commande) {
    historiqueCommandes.push_back(commande);
}

void Client::afficherClient() const {
    std::cout << "ID Client : " << id << std::endl;
    std::cout << "Nom       : " << nom << std::endl;
    std::cout << "Email     : " << email << std::endl;
}

void Client::afficherHistorique() const {
    std::cout << "\nHistorique des commandes de " << nom << " :" << std::endl;

    if (historiqueCommandes.empty()) {
        std::cout << "Aucune commande trouvee." << std::endl;
        return;
    }

    for (const Order& commande : historiqueCommandes) {
        commande.displayOrder();
        std::cout << "----------------------" << std::endl;
    }
}
