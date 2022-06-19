#ifndef POKEMON_H
#define POKEMON_H
#include<iostream>
#include<string>

class Pokemon{
    protected:
        std::string nome;
        std::string tipo;
        double forcaAtaque;
        double forcaDefesa;
        std::string proxEvolucao;
        double saude;
    public:
        Pokemon();
        Pokemon(std::string, std::string, std::string, double, double, double);
        Pokemon(const Pokemon&);
        std::string getNome();
        void maxSaude();
        void info();
};



#endif
