#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"
#include <iostream>

using namespace std;

class Terreno : public virtual Imovel{
    protected:
    double AreaTerreno;
    public:
    Terreno();
    Terreno(double preco, int id,double AreaTerreno);
    string toString() const;
};

#endif