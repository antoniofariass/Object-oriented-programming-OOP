#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Funcionario.h"

Funcionario::Funcionario(){
    CargaHr = -1;
    salario = -1;
}

Funcionario::Funcionario(int CargaHr,float salario){
    this->CargaHr = CargaHr;
    this->salario = salario;
}

int Funcionario::getCarga(){
    return CargaHr;
}

void Funcionario::setCarga(int CargaHr){
    this->CargaHr = CargaHr;
}

float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setSalario(){
    this->salario = salario;
}

string Funcionario::toString(){
    return "CARGA HORARIA: " + to_string(CargaHr) + "\n" + "SALARIO: " + to_string(salario);
}