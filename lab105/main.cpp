// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_atendimento.hpp"

//#include<iostream>
//#include "FilaAtendimento.hpp"
using namespace std;
int main ()
{
    FilaAtendimento fila;
    char k;
    int idade, senha;
    std::string name;
    while(cin>>k){
        switch(k){
            case 'a':
                cin>> name>>idade;
                fila.adicionar_cliente(name, idade);
                break;
            case 'c':
                fila.chamar_cliente();
                break;
            case 'e':
                cin>> senha;
                fila.estimativa_tempo_espera(senha);
                break;
            case 'p':
                fila.imprimir_fila();
                break;
            case 'b':
                avaliacao_basica();
                break;
        }
    }
    return 0;
}