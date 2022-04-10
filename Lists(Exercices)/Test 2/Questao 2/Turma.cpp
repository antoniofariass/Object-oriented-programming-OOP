#include "Professor.h"
#include "Aluno.h"
#include "Turma.h"

#include <string>
#include <stdlib.h>

void Turma::addAluno(Aluno &a){
    int k;
    for (k = 0; k < 10; k++)
    {
        if (k != -1)
        {
            cout<<"A lista se encontra cheia!"<<endl;
        }else{
            alunos[k] = a; 
            } 
    }
}

bool Turma::removerAluno(int matricula){
    int i;
    for (i = 0; i < 10; i++)
    {
        if (matricula == alunos[i].getMatricula())
        {
            alunos[i].setMatricula(-1);
        }
        else
        {
            cout << "Este aluno nao existe no sistema.";
        }
        
    }
    
}

void Turma::ImprimirAluno(int matricula){
    int j;
    for (j = 0; j < 10; j++)
    {
        if (matricula == alunos[j].getMatricula())
        {
            cout << alunos[j].toString() << endl ;
        }
        else
        {
            cout << "Este aluno nao existe no sistema.";
        }
        
    }
}

void Turma::ImprimirAlunos(){
    int c;
    for (c = 0; c < 10; c++)
    {
        cout << alunos[c].toString() << endl;
    }
    
}

void Turma::ImprimirProfessor(){
    cout << Professor::toString()<< endl;
}

void Turma::AlterarProfessor(Professor &p){
    int tmp;
    tmp = p;
    Professor::setNome(tmp);
}
