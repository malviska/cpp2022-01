#ifndef TREINADOR_H
#define TREINADOR_H
#include<bits/stdc++.h>
#include"healthBall.hpp"
#include"evolutionBall.hpp"

class Treinador
{
private:
    std::string nome;
    std::vector<EvolutionBall*> evolution_balls;
    std::vector<HealthBall*> health_balls;
public:
    Treinador();
    Treinador(std::string);
    HealthBall* selecionarHealthBall(int);
    EvolutionBall* selecionarEvolBall(int);
    void adicionarPokebola(HealthBall*);
    void adicionarPokebola(EvolutionBall*);
    void listarPokemons();
    ~Treinador();
};


#endif