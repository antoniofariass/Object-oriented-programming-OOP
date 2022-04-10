#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Pessoa{
    protected:
    string nome;
    int id;
    Endereco dono;

    public:
    string toString() const;

    string getNome() const;
    void setNome(string);
    
    int getID() const;
    void setID(int);

    Pessoa();
    Pessoa(string nome, int id,int num,string cep);
};

#endif