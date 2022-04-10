#include "Funcionario.h"

Funcionario::Funcionario(string nome, int matricula, float HT, int experiencia)
{
this-> nome = nome;
this-> matricula = matricula;
this-> HT = HT;
this-> experiencia = experiencia;
}

int Funcionario::getMatricula()
{
return this->matricula;
}

string Funcionario::getNome()
{
return this->nome;
}

int Funcionario::getExperiencia()
{
return this->experiencia;
}