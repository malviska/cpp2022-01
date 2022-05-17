#ifndef Time_H
#define Time_H
#include "Jogador.hpp"
#include <list>

class Time
{
    public:
    std::string _nome;
    std::list <Jogador> _jogadores;
    Time();
    Time(std::string);
    void adicionar_jogador(std::string, std::string, int);
    void imprimir_lista_jogadores();
    void imprimir_folha_salarial_consolidada();
};


#endif