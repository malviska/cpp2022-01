#include"pokebola.hpp"
#include<cstdlib>

int Pokebola::count = 0;

Pokebola::Pokebola(){
    this->id = this->count;
    this->count++;
    this->pokemon = nullptr;
}
Pokebola::~Pokebola(){
    delete this->pokemon;
}
int Pokebola::getId(){
    return this->id;
}
void Pokebola::guardarPokemon(){
    return this->pokemon->setDormir();
}
Pokemon* Pokebola::liberarPokemon(){
    this->pokemon->setDormir();
    return this->pokemon;
}
bool Pokebola::capturar(Pokemon& _pokemon){
    double num = ((double) rand() / (RAND_MAX));
    if(num >0.5){
        PokemonCapturado* mon = new PokemonCapturado(_pokemon);
        this->pokemon = mon;
        return true;
    }else return false;
}
PokemonCapturado* Pokebola::getPokemon(){
    return this->pokemon;
}
