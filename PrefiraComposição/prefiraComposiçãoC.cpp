#include <iostream>
#include <string>

using namespace std;

class IPVA{
    public:
        float calcularIPVA(Carro carro){
            float valor = carro.valorVenal();
            /*calculo e retorna*/
        }  
};

class Impostos{
    private:
        IPVA ipva;
        IPTU iptu;
        ImpostoDeRenda idr;
};