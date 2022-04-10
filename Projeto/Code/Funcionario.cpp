#include <iostream>
#include "Funcionario.h"
using namespace std;

string Funcionario::getNome() const{
  return this->nome;
}

void Funcionario::setNome(){
  cout << "Digite o nome do Funcionário: ";
  getline(cin, this->nome);
}

int Funcionario::getId() const{
  return this->id;
}

void Funcionario::setId(){
  cout << "Digite umm código de identificação (id) para o funcionário: ";
  cin >> this->id;
  cin.ignore();
}

int Funcionario::getNascimento() const{
  return this->nascimento;
}

void Funcionario::setNascimento(){
  cout << "Digite o ano de nascimento (DDMMAAAA): ";
  cin >> this->nascimento;
  cin.ignore();
}

string Funcionario::getCpf() const{
  return this->cpf;
}

void Funcionario::setCpf(){
  cout << "Digite o CPF (sem a pontuação): ";
  getline(cin, this->cpf);
}

string Funcionario::getFuncao() const{
  return this->funcao;
}

void Funcionario::setFuncao(){
  cout << "Digite a função: ";
  getline(cin, this->funcao);
}

int Funcionario::getSalario() const{
  return this->salario;
}

void Funcionario::setSalario(){
  cout << "Digite o salário: ";
  cin >> this->salario;
  cin.ignore();
}

string Funcionario::getTurno() const{
  return this->turno;
}

void Funcionario::setTurno(){
  cout << "Digite o turno de trabalho: ";
  getline(cin, this->turno);
}

Funcionario::Funcionario(): endereco(){
  this->nome = " ";
  this->id = 0;
  this->nascimento = 0;
  this->cpf = " ";
  this->salario = 0;
  this->turno = " ";
}

Funcionario::Funcionario(string nome, int id, int nascimento, string cpf, string funcao, int salario, string turno, string estado, string cidade, string cep, string rua, int numero, string bairro): endereco(estado, cidade, cep, rua, numero, bairro){
  this->nome = nome;
  this->id = id;
  this->nascimento = nascimento;
  this->cpf = cpf;
  this->funcao = funcao;
  this->salario = salario;
  this->turno = turno;
}

string Funcionario::imprimir() const{
  return ("DADOS DO FUNCIONÁRIO\n"
          "Nome: " + this->nome +
          "\nId: " + to_string(this->id) +
          "\nAno de Nascimento: " + to_string(this->nascimento) +
          "\nCPF: " + this->cpf +
          "\nFunção: " + this->funcao +
          "\nSalário: R$" + to_string(this->salario) +
          "\nTurno: " + this->turno +
          "\n" + endereco.imprimir());
}