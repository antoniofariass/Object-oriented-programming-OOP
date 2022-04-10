#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Imovel.h"
#include "Casa.h"
#include "Terreno.h"
#include "CasaComTerreno.h"

CasaComTerreno::CasaComTerreno(){
  valorMQ = -1;
}

CasaComTerreno::CasaComTerreno(double preco,int id, int NumQuartos,double AreaTerreno, float valorMQ)
:Imovel(preco,id),Casa(preco,id,NumQuartos), Terreno(preco,id,AreaTerreno){
    this->valorMQ = valorMQ;
}

double CasaComTerreno::calculoValor(){
    return valorMQ * this->NumQuartos * this->AreaTerreno;
}

string CasaComTerreno::toString(){
    return Terreno::toString() + "\n" + Casa::toString() + "\n"+ "Valor total da casa: " + to_string(calculoValor()) ;

}


