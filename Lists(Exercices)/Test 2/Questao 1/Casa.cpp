#include <iostream>
#include <string>
using namespace std;

#include "Casa.h"
#include "Imovel.h"

Casa::Casa(){
  NumQuartos = -1;
}

Casa::Casa(double preco,int id,int NumQuartos):Imovel(preco,id){
    this->NumQuartos = NumQuartos;
}

string Casa::toString() const{
    return " Número de Quartos: " + to_string(NumQuartos);
}