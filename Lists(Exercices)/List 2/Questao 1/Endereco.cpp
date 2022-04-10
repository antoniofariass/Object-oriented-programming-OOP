#include <iostream>
using namespace std;
#include "Endereco.h"

Endereco::Endereco(){
  this->bairro="";
  this->cidade="";
  this->num=0;
}

Endereco::Endereco(string bairro, string cidade, int num){
  this->bairro=bairro;
  this->cidade=cidade;
  this->num=num;
}

string Endereco::toString() const{
  return ("Bairro: "+this->bairro+" Cidade: "+this->cidade+" num: "+to_string(this->num));
}
void Endereco::setBairro(string Bairro){
  this->bairro=Bairro;
}