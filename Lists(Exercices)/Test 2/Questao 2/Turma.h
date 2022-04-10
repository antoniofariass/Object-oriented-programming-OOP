#ifndef TURMA_H
#define TURMA_H

#include "Professor.h"
#include "Aluno.h"

#include <string>
#include <stdlib.h>

class Turma : public virtual Aluno,public virtual Professor{
    
    private:
    Aluno alunos[10];
    Professor prof;

    public:
    void addAluno(Aluno &a);
    bool removerAluno(int matricula);
    void ImprimirAluno(int matricula);
    void ImprimirAlunos();
    void ImprimirProfessor();
    void AlterarProfessor(Professor &p);
};

#endif