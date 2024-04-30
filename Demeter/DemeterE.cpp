#include <iostream>
#include <string>

using namespace std;

class IPVA{
    public: 
        float calcularIPVA(Cliente cliente){
            Carro carro = cliente.getCarro();
            float valor = carro.valorVenal();
            /*calculo e retorna*/
        }
};