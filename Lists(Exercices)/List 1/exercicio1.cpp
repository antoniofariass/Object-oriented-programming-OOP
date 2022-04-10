#include <iostream>
using namespace std;

class Complexo{
    public:
        Complexo(void);
        Complexo(float re,float im);
        float getReal(void);
        float getImaginario;
        void setReal(float re);
        void setImaginario(float im);
        void imprime(void);
    private:
        float real;
        float imag;

};