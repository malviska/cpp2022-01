#ifndef Cliente_H
#define Cliente_H
#include<iostream>

struct Cliente
{
    int _idade, _senha;
    std::string _nome;
    Cliente();
    Cliente(std::string,int,int);
    bool eh_prioritario();
    int tempo_estimado_atendimento();
    void imprimir_dados();
};



#endif