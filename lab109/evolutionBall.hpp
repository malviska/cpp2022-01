#ifndef EVOLUTIONBALL_H_
#define EVOLUTIONBALL_H_
#include"pokebola.hpp"

class EvolutionBall: public Pokebola{
    private:
        double taxaPoder;
        bool habilidadeUsada;
    public:
        EvolutionBall();
        EvolutionBall(double _taxapoder);
        bool evoluirPokemon();
};

#endif // EVOLUTIONBALL_H_
