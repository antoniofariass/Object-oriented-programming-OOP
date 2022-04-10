#include <iostream>
#include "Endereco.h"
using namespace std;

string Endereco::imprimir() const{
  return ("Estado: " + this->estado +
          "\nCidade: " + this->cidade +
          "\nCEP: " + this->cep +
          "\nRua: " + this->rua +
          "\nNúmero: " + to_string(this->numero) +
          "\nBairro: " + this->bairro);
}

string Endereco::getEstado() const{
  return this->estado;
}

void Endereco::setEstado(){
  cout<<"Digite o estado: ";
  getline(cin, this->estado);
}

string Endereco::getCidade() const{
  return this-> cidade;
}

void Endereco::setCidade(){
  cout<<"Digite a cidade: ";
  getline(cin, this->cidade);
}

string Endereco::getCep() const{
  return this->cep;
}

void Endereco::setCep(){
  cout<<"Digite o CEP: ";
  getline(cin, this->cep);
}

string Endereco::getRua() const{
  return this->rua;
}

void Endereco::setRua(){
  cout<<"Digite a rua: ";
  getline(cin, this->rua);
}

int Endereco::getNumero() const{
  return this->numero;
}

void Endereco::setNumero(){
  cout<<"Digite o número da casa: ";
  cin>>this->numero;
  cin.ignore();
}

string Endereco::getBairro() const{
  return this->bairro;
}

void Endereco::setBairro(){
  cout<<"Digite o bairro: ";
  getline(cin, this->bairro);
}

Endereco::Endereco(){
  this->estado = " ";
  this->cidade = " ";
  this->cep = " ";
  this->rua = " ";
  this->numero = 0;
  this->bairro = " ";
}

Endereco::Endereco(string estado,string cidade,string cep, string rua, int numero, string bairro){
  this->estado = estado;
  this->cidade = cidade;
  this->cep = cep;
  this->rua = rua;
  this->numero = numero;
  this->bairro = bairro;
}