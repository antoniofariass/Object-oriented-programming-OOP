#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"
using namespace std;

Pessoa::Pessoa():endereco(){
  this->nome="-";
  this->idade=0;
}

Pessoa::Pessoa(string nome, int idade, string cidade, string bairro, int numero):endereco(cidade, bairro, numero){
  this->nome=nome;
  this->idade=idade;
}

string Pessoa::toString(){
  return ("Nome: "+this->nome+" idade: "+to_string(this->idade)+" "+this->endereco.toString());
}

string Pessoa::getNome() const{
  return this->nome;
}

void Pessoa::setNome(string nome){
  this->nome=nome;
}
void Pessoa::setIdade(int idade){
  this->idade=idade;
}

void Pessoa::setEndereco(Endereco &e){
  this->endereco=e;
}

const Endereco& Pessoa::getEndereco() const{
  return endereco;
}

