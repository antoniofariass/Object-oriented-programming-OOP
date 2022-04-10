#ifndef CASACOMTERRENO_H
#define CASACOMTERRENO_H

#include "Casa.h"
#include "Terreno.h"

#include <iostream>
using namespace std;

class CasaComTerreno : virtual public Casa , virtual public Terreno{
    protected:
    float valorMQ;
    public:
    double calculoValor();
    CasaComTerreno();
    CasaComTerreno(double preco,int id, int NumQuartos,double AreaTerreno, float valorMQ);
    string toString();
};

#endif