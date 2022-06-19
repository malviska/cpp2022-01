#include"pokemon.hpp"

Pokemon::Pokemon(){}
Pokemon::Pokemon(std::string _nome, std::string _tipo, std::string _pEvol, double _fA, double _fD, double _saude){
    this->nome = _nome;
    this->tipo = _tipo;
    this->proxEvolucao = _pEvol;
    this->forcaAtaque = _fA;
    this->forcaDefesa = _fD;
    this->saude = _saude;
}
Pokemon::Pokemon(const Pokemon& _pok){
    this->nome = _pok.nome;
    this->forcaAtaque = _pok.forcaAtaque;
    this->forcaDefesa = _pok.forcaDefesa;
    this->proxEvolucao = _pok.proxEvolucao;
    this->tipo = _pok.tipo;
    this->saude = _pok.saude;
}
std::string Pokemon::getNome(){
    return this->nome;
}
void Pokemon::maxSaude(){
    this->saude = 100;
}
void Pokemon::info(){
    std::cout<<"Pokemon: "<<this->nome<<", "<<this->tipo<<", "<<this->forcaAtaque<<", "<<this->forcaDefesa<<", "<<this->saude<<std::endl;
}