#include"healthBall.hpp"

HealthBall::HealthBall(double _intervalo){
    this->intervalo = _intervalo;
    this->ultimoUso = 0;
}
bool HealthBall::recuperarPokemon(){
    time_t now = time(NULL);
    if(this->pokemon == nullptr) return false;
    else{
        double seconds = difftime(now, this->ultimoUso);
        if(seconds>this->intervalo){
            this->pokemon->maxSaude();
            this->ultimoUso = now;
            return true;
        }else return false;
    }
}
