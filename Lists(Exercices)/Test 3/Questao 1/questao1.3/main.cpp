#include <iostream>
#include "fila.h"
int main() {
    fila<int, 5> teste;
    
    teste.entraFila(50);
    teste.entraFila(10);

    cout<<"61 tem que ta no topo"<<endl;
    teste.entraFila(61);
    teste.entraFila(20);
    teste.imprimeFila();

    cout<<"69 tem que ta no topo"<<endl;
    teste.entraFila(69);
    teste.imprimeFila();

    cout<<"69 tem que sair"<<endl;
    teste.saiFila();
    teste.imprimeFila();
    
    cout<<"63 tem que ta no topo"<<endl;
    teste.entraFila(63);
    teste.imprimeFila();
}