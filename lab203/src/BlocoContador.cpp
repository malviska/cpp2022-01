#include"BlocoContador.hpp"

BlocoContador::BlocoContador(Coordenada _coord){
    this->coord = _coord;
    this->revelado = false;
}

BlocoContador::~BlocoContador(){};

bool BlocoContador::revelar(std::vector<std::vector<Bloco*>>& tabuleiro){
    this->revelado = true;
    return true;
}
void BlocoContador::incrementarValor(){
    this->valor++;
}
