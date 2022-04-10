#include <iostream>
using namespace std;
#include "exercicio3.h"

int main(){
    Elevador E1(8,3);
    cout << "Total andares: " << E1.getTotalAndares() << endl;
    if(E1.sair()){
        cout <<"Saiu 1 pessoa" << endl;
    }
    else{
        cout << "Elevador ja vazio" << endl;
    }
    E1.entrar();
    E1.entrar();
    E1.entrar();
    if (E1.entrar())
        cout << "Entrou 1 pessoa" << endl;
    else
        cout <<"Elevador lotado!" << endl;
    



}