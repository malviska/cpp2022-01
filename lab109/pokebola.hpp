#ifndef POKEBOLA_H
#define POKEBOLA_H
#include "pokemonCapturado.hpp"

class Pokebola
{
    private:
        static int count;
    protected:
        int id; 
        PokemonCapturado* pokemon;
    public:
        Pokebola();
        ~Pokebola();
        int getId();
        void guardarPokemon();
        Pokemon* liberarPokemon();
        bool capturar(Pokemon&);
        PokemonCapturado* getPokemon();
};



#endif