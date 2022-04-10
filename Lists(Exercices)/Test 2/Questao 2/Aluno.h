#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Pessoa.h"

class Aluno : public Pessoa{
    private:
    float media;
    int matricula;

    public:
    float getMedia() const;
    void setMedia(float);

    int getMatricula() const;
    void setMatricula(int);

    Aluno();
    Aluno(string nome, int id,int num,string cep,float media, int matricula);

    string toString() const;
};

#endif

