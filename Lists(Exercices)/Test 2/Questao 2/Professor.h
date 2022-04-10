#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include "Funcionario.h"

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Professor : public Pessoa, public Funcionario{
    private:
    string area;

    public: 
    string getArea() const;
    void setArea(string);

    Professor();
    Professor(int num, string cep, string nome, int id,int CargaHr,float salario,string area);

    string toString() const;
};

#endif