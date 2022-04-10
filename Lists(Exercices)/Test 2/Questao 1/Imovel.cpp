#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Imovel.h"

Imovel::Imovel(){
  preco = -1;
  id = -1;
}

Imovel::Imovel(double preco, int id){
    this->preco = preco;
    this->id = id;
}

int Imovel::getID(){
  return id;
}

double Imovel::getPreco(){
  return preco;
}

string Imovel::toString() const{
    return " Identificador: " + to_string(id) + "\n" +  " Preco: " + to_string(preco);
}