#ifndef Jogador_H
#define Jogador_H
#include<iostream>

class Jogador
{
    public:
    std::string _nome, _posicao;
    int _salario;
    Jogador();
    Jogador(std::string, std::string, int);
    void imprimir_dados();

};


#endif