#include <iostream>
using namespace std;
#include "Aluno.h"

int main(){
    Aluno a1("Leandro");
    a1.addNota(0,73);
    a1.addNota(1,83);
    a1.addNota(2,90);
    a1.calculoMedia();
    a1.toString();

    Aluno a2("Antonio");
    a2.addNota(0,40);
    a2.addNota(1,30);
    a2.addNota(2,40);
    a2.addNota(3,60);
    a2.toString();

    Aluno a3("Luiza");
    a3.alterarNota(0,40);
    a3.addNota(0,20);
    a3.calculoMedia();
}