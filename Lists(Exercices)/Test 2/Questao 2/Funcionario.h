#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Funcionario{
    protected:
    int CargaHr;
    float salario;

    public:

    int getCarga() const;
    void setCarga(int);

    float getSalario() const;
    void setSalario(float);

    Funcionario();
    Funcionario(int CargaHr,float salario);

    string toString() const;

};

#endif
