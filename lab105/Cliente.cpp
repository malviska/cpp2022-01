#include "Cliente.hpp"

Cliente::Cliente(){}
Cliente::Cliente(std::string nome, int idade, int senha){
    _nome = nome;
    _idade = idade;
    _senha = senha;
}
bool Cliente::eh_prioritario(){
    return (this->_idade >= 60);
}
int Cliente::tempo_estimado_atendimento(){
    if(this->eh_prioritario()) return 12;
    else return 8;
}
void Cliente::imprimir_dados(){
    std::cout<<this->_senha<<"\t"<<this->_nome<<"\t"<<this->_idade<<std::endl;
}