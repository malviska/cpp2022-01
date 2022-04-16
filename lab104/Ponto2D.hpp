#ifndef Ponto2D_H
#define Ponto2D_H
#include<cmath>
#include<string>
#include<iomanip>
#include<sstream>

struct Ponto2D{
    double _x, _y;

    Ponto2D(double, double);
    double calcular_distancia(Ponto2D*);
    std::string get_dados();
};
#endif