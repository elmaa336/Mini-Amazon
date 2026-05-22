#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
using namespace std;

class Client {
private:
    string name;

public:
    Client(string n) : name(n) {}

    string getName() { return name; }
};

#endif