#include <iostream> 
using namespace std; 

class Aluno {
    public:
    Aluno(string nome);
    void addNota(int unidade, int valor);
    bool alterarNota(int unidade, int valor);
    void calculoMedia();
    string toString();
    string getNome();
    void setNome(string nome);
   
    private:
    string nome;
    float notas[3];
    float mediatotal;
};

Aluno::Aluno(string nome){
    this -> nome = nome;
    int i;
    for (i = 0; i < 3; i++)
    {
        notas[i] = -1;
    }
}

void Aluno::addNota(int unidade,int valor){
    
    if (valor >= 0 && valor <= 100){
            if (unidade == 3)
            {
                cout << "Nao eh possivel adicionar mais notas, o limite de 3 foi excedido." << endl;
            }
            else{
                notas[unidade] = valor;
            }
    }else
    {
        cout << "Nota inválida, por favor adiciona novamente." << endl;
    }
    
}

bool Aluno::alterarNota(int unidade,int valor){
    if (notas[unidade] == -1){
        cout << "Nenhuma nota foi adicionada, por favor adicione" << endl;
        return false;
    } 
    else{
        notas[unidade] = valor;
    }
    
}

void Aluno::calculoMedia(){
    int i;
    int j;
    for (i = 0; i < 3; i++)
    {
        if (notas[i] == -1)
        {
            cout << "Notas imcompletas, a nota na posicao" << i << "ainda nao foi adicionada" << endl;
            
        }
    }
    
    float media; 
    
    for (j=0;j<3;j++) {
        media += notas[j];
    }
    
    media = media/3;
    mediatotal = media;
    
    if (media >= 70)
        cout << "Aprovado" << endl;
    if (media >=40 && media<70){
            cout<< "Apto para o exame final, nota minima para ser aprovado:" << (100-media) << endl;
         }
    if (media<40){
        cout << "O aluno nao foi aprovado." << endl;
    }
}

string Aluno::toString(){
    cout << nome << ",nota 1: " << notas[0] << ",nota 2:" << notas[1] << ",nota 3:" << notas[2] << ". Media: " << mediatotal << endl;

    int h;
    for (h = 3; h < 3; h++)
    {
        if (notas[h] == -1)
        {
            cout << "-" << endl;
        }
        else{
            cout << mediatotal << endl;
        }
        
    }

}

    
