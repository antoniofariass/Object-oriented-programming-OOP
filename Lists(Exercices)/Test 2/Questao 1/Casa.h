#ifndef CASA_H
#define CASA_H

#include <iostream>
#include "Imovel.h"

using namespace std;

class Casa : public virtual Imovel{
    protected:
    int NumQuartos;
    public:
    string toString() const;
    Casa();
    Casa(double preco,int id,int NumQuartos);
};

#endif