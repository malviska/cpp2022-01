#ifndef Drone_H
#define Drone_H
#include<cmath>
#include<string>
#include "Ponto2D.hpp"
#include<iostream>
#include<vector>
#include<map>

struct Drone{
    int _id;
    double _raio, _energia = 100;
    Ponto2D _ponto;
    std::vector<std::string> _buffer;
    std::string* _buf;

    Drone(int,Ponto2D, double);
    void mover(double, double, double);
    double calcular_distancia(Drone*);
    void broadcast_mensagem(Drone**, int);
    void salvar_mensagem(std::string);
    void imprimir_mensagens_recebidas();
    void imprimir_status();
};
#endif