#include <iostream>
using namespace std;
#include "Conta.h"


int main(){
    ContaDePoupanca C1("Leandro Almeida",2000);
    ContaDePoupanca C2("Any Caroliny",300);
    C1.sacar(200);
    C1.calculeRendimentoMensal();
    C1.toString();

    C2.sacar(300);
    C2.calculeRendimentoMensal();
    C2.toString();
}