#include "Jogador.hpp"


Jogador::Jogador(){}

Jogador::Jogador(std::string nome, std::string posicao,int salario){
    _nome = nome;
    _posicao = posicao;
    _salario = salario;
}

void Jogador::imprimir_dados(){
    std::cout<< this->_nome<<"\t"<<this->_posicao<<"\t"<<this->_salario<<std::endl;
}