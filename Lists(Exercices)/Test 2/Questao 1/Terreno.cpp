#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Imovel.h"
#include "Terreno.h"

Terreno::Terreno(){
  AreaTerreno = -1;
}

Terreno::Terreno(double preco, int id,double AreaTerreno) : Imovel(preco,id){
    this->AreaTerreno = AreaTerreno;
}

string Terreno::toString() const{
    return Imovel::toString() + "\n" + " Area do Terreno: " + to_string(AreaTerreno);
}


