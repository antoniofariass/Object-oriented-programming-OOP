#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Pessoa.h"
#include "Funcionario.h"
#include "Endereco.h"
#include "Professor.h"

Professor::Professor():Pessoa(),Funcionario(){
    area = -1;
}

Professor::Professor(int num, string cep, string nome, int id,int CargaHr,float salario,string area): Pessoa(nome,id,num,cep), Funcionario(CargaHr,salario){
    this->area = area;
}

string Professor::getArea() const{
    return area;
}

void Professor::setArea(string area){
    this-> area = area;
}

string Professor::toString() const{
    return Pessoa::toString() + "\n" + Funcionario::toString() + "\n" + "AREA DO PROFESSOR: " + area;
}
