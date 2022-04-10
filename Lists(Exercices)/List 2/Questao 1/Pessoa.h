#ifndef PESSOA_H_
#define PESSOA_H_

#include <iostream>
#include "Endereco.h"
using namespace std;

class Pessoa {
  private:
    string nome;
    int idade;
    Endereco endereco;
  public:
    Pessoa();
    Pessoa(string nome, int idade, string cidade, string bairro, int num);
   
    const Endereco& getEndereco() const;
    void setEndereco(Endereco &e);
    
    void setNome(string nome);
    void setIdade(int idade);
    void setAltura(float altura);
   
    string getNome() const;
    string toString();
};

#endif /* PESSOA_H_ */

