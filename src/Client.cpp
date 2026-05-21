#include "Client.h"

Client::Client() {
    id = 0;
    nom = "";
    email = "";
}

Client::Client(int id, string nom, string email) {
    this->id = id;
    this->nom = nom;
    this->email = email;
}

int Client::getId() const {
    return id;
}

string Client::getNom() const {
    return nom;
}

string Client::getEmail() const {
    return email;
}

void Client::setNom(string nom) {
    this->nom = nom;
}

void Client::setEmail(string email) {
    this->email = email;
}

void Client::ajouterCommande(const Order& commande) {
    historiqueCommandes.push_back(commande);
}

void Client::afficherClient() const {
    cout << "ID Client : " << id << endl;
    cout << "Nom       : " << nom << endl;
    cout << "Email     : " << email << endl;
}

void Client::afficherHistorique() const {
    cout << "\nHistorique des commandes de " << nom << " :" << endl;

    if (historiqueCommandes.empty()) {
        cout << "Aucune commande trouvee." << endl;
        return;
    }

    for (const Order& commande : historiqueCommandes) {
        commande.afficherCommande();
        cout << "----------------------" << endl;
    }
}