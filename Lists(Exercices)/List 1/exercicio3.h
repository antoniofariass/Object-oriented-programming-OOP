#include <iostream>
using namespace std;

class Elevador
{
private:
    int andarAtual;
    int totalAndares;
    int totalPessoasElevador;
    int quantPessoasAtual;
public:
    Elevador(int totalAndares, int totalPessoasElevador);
    bool entrar();
    bool sair();
    bool sobe(int andar);
    bool desce(int andar);

    void setAndarAtual(int andar);
    int getTotalAndares();

};

Elevador::Elevador(int totalAndares, int totalPessoasElevador)
{
    andarAtual = 0; //ta na questao, iniciar com 0
    this -> totalAndares = totalAndares; //o primeiro eh o private, o segundo eh o do construtor 
    this -> totalPessoasElevador = totalPessoasElevador;
    quantPessoasAtual = 0;

}

bool Elevador::entrar(){
    if (quantPessoasAtual<totalPessoasElevador)
    {
        quantPessoasAtual++;
        return true;
    }
    else{
        return false;
    }
    
}

bool Elevador::sair(){
    if (quantPessoasAtual == 0)
        return false;
    else{
        quantPessoasAtual--;
        return true;
    }
}

int Elevador::getTotalAndares(){
    return totalAndares;
}
