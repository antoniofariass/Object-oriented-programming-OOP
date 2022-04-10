#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Endereco.h"

Endereco::Endereco(){
    num = -1;
    cep = -1;
}

Endereco::Endereco(int num,string cep){
    this->num = num;
    this->cep = cep;
}

int Endereco::getNum() const{
    return num;
}

void Endereco::setNum(int num){
    this->num = num;
}

string Endereco::getCep() const{
    return cep;
}

void Endereco::setCep(string cep){
    this->cep = cep;
}

string Endereco::toString() const{
    return "CEP: " + cep + "\n" + "NUMERO: " + to_string(num) + "\n";
}

