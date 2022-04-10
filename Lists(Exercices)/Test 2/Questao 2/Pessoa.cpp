#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Endereco.h"
#include "Pessoa.h"

Pessoa::Pessoa(){
    nome = -1;
    id = -1;
}

Pessoa::Pessoa(string nome, int id,int num,string cep):dono(num,cep){
    this->nome = nome;
    this->id = id;
}

string Pessoa::getNome() const{
    return nome;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

int Pessoa::getID() const{
    return id;
}

void Pessoa::setID(int id){
    this->id = id;
}

string Pessoa::toString() const{
    return "NOME:" + nome + "\n" + "IDENTIDADE:" + to_string(id);
}