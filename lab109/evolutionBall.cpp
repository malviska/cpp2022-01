#include "evolutionBall.hpp"

EvolutionBall::EvolutionBall(){}

EvolutionBall::EvolutionBall(double _taxaPoder){
    this->taxaPoder = _taxaPoder;
    this->habilidadeUsada = false;
}
bool EvolutionBall::evoluirPokemon(){
    if(this->pokemon == nullptr) return false;
    else{
        if(this->habilidadeUsada) return false;
        else{
            this->pokemon->evoluir(this->taxaPoder);
            this->habilidadeUsada = true;
            return true;
        }
    }
}
