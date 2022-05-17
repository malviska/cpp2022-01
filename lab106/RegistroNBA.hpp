#ifndef RegistroNBA_H
#define RegistroNBA_H
#include "Time.hpp"
#include<map>

class RegistroNBA
{
    public:
        std::map<std::string,Time>  _times;
        void adicionar_time(std::string);
        void adicionar_jogador(std::string, std::string, std::string , int );
        void imprimir_lista_jogadores_time(std::string);
        void imprimir_folha_consolidada_time(std::string);
        void imprimir_folha_salarial_geral();
};



#endif