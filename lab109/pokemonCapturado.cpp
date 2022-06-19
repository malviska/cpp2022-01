#include"pokemonCapturado.hpp"

PokemonCapturado::PokemonCapturado(Pokemon& _pok): Pokemon(_pok){
    this->evoluido = false;
    this->dormindo = true;
};

void PokemonCapturado::evoluir(double taxaPoder){
    this->nome = this->proxEvolucao;
    this->proxEvolucao = "";
    this->forcaAtaque *= 1 + taxaPoder;
    this->forcaDefesa *= 1 + taxaPoder;
    this->evoluido = true;
}
void PokemonCapturado::setDormir(){
    this->dormindo = !(this->dormindo);
}