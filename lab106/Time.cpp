#include "Time.hpp"

Time::Time(){}

Time::Time(std::string nome){
    _nome = nome;
}

void Time::adicionar_jogador(std::string nome, std::string posicao, int salario){
    Jogador* jogador = new Jogador(nome, posicao, salario);
    if(this->_jogadores.empty()) this->_jogadores.push_front(*jogador);
    else{
        this->_jogadores.push_back(*jogador);
        for(std::list<Jogador>::iterator it = this->_jogadores.begin(); it != this->_jogadores.end(); it++){
            if(jogador->_salario > it->_salario){
                this->_jogadores.insert(it, *jogador);
                this->_jogadores.pop_back();
                break;
            }
        }
    }
}
void Time::imprimir_lista_jogadores(){
    std::cout<< _nome <<"\n";
    for(std::list<Jogador>::iterator it = this->_jogadores.begin(); it != this->_jogadores.end(); it++){
        it->imprimir_dados();
    }
}

void Time::imprimir_folha_salarial_consolidada(){
    int folha_salarial = 0;
    for(std::list<Jogador>::iterator it = this->_jogadores.begin(); it != this->_jogadores.end(); it++){
        folha_salarial+= it->_salario;
    }
    std::cout<< _nome << "\t"<< folha_salarial;
}