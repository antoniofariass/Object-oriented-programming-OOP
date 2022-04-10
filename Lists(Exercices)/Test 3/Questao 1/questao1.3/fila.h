#include <iostream>
#include <list>
using namespace std;
template <typename T, int tam>
class fila{
private:
    list<T> tfila;
    int primeiro;
public:
    fila(void){
        primeiro=0;
    };
    
    int vazia (void){
        return primeiro == 0;
    };
   
    void entraFila(T novo){
        if (primeiro<tam){
            if (novo>60){
                typename list<T>::iterator position = tfila.end();
                typename list<T>::iterator k = tfila.begin();
                //int contador=0;
                for(k = tfila.begin();k!=tfila.end();k++){
                    if (*k<novo){
                        position--;
                    }              
                }
                tfila.insert(position,novo);
                
            }else{
                tfila.push_back(novo);
            };
            primeiro++;
        }
    };

    void saiFila(){
        if(!vazia()){
            tfila.pop_front();
            primeiro--;
        }
    };

    T obtemPrimeiro(){
    if (!vazia()){
            return tfila.front();
        };
        
    };
    void imprimeFila(){
       typename list<T>::iterator k;
       for(k = tfila.begin();k!=tfila.end();k++){
           cout<<*k<<endl;
       }
    };
};