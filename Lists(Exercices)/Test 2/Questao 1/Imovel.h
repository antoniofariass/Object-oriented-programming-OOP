#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
using namespace std;

class Imovel{
    protected:
    double preco;
    int id;

    public:
    string toString() const;
    Imovel(double preco,int id);
    Imovel();
    int getID();
    double getPreco();
};

#endif