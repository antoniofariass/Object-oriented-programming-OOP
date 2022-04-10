#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
using namespace std;

class Endereco{
  private:
    string estado;
    string cidade;
    string cep;
    string rua;
    int numero;
    string bairro;

  public:
    string imprimir() const;
      
    string getEstado() const;
    void setEstado();

    string getCidade() const;
    void setCidade();

    string getCep() const;
    void setCep();
      
    string getRua() const;
    void setRua();

    int getNumero() const;
    void setNumero();

    string getBairro() const;
    void setBairro();

    Endereco();
    Endereco(string estado, string cidade, string cep, string rua, int numero, string bairro);
};

#endif