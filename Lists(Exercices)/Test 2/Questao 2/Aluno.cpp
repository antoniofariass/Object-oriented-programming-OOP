#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Aluno.h"
#include "Pessoa.h"
#include "Endereco.h"

Aluno::Aluno(): Pessoa(0,0,0,0){
    media = 0;
    matricula = -1;
}

Aluno::Aluno(string nome, int id,int num,string cep,float media, int matricula):Pessoa(nome,id,num,cep){
    this->media = media;
    this->matricula = matricula;
}

float Aluno::getMedia() const{
    return media;
}

void Aluno::setMedia(float media){
    this->media = media;
} 

int Aluno::getMatricula() const{
    return matricula;
}

void Aluno::setMatricula(int matricula){
    this->matricula = matricula;
}

string Aluno::toString() const{
    return Pessoa::toString() + "\n" + "MEDIA: " + to_string(media) + "\n" + "MATRICULA: " + to_string(matricula);
}   
