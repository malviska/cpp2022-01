#ifndef POKEMONCAPTURADO_H
#define POKEMONCAPTURADO_H
#include"pokemon.hpp"

class PokemonCapturado : public Pokemon {
    private:
        bool evoluido;
        bool dormindo;
    public:
        PokemonCapturado(Pokemon&);
        void evoluir(double);
        void setDormir();
};



#endif
