#include "RegistroNBA.hpp"
#include <sstream>

void RegistroNBA::adicionar_time(std::string nome){
    Time* novoTime = new Time(nome);
    this->_times.insert(std::pair<std::string,Time>(novoTime->_nome, *novoTime));
}

void RegistroNBA::adicionar_jogador(std::string nome_time, std::string nome_jogador, std::string posicao, int salario){
    if(this->_times.find(nome_time) == _times.end()) this->adicionar_time(nome_time);
    this->_times[nome_time].adicionar_jogador(nome_jogador, posicao,salario);
}
void RegistroNBA::imprimir_lista_jogadores_time(std::string nome_time){
    this->_times[nome_time].imprimir_lista_jogadores();
}
void RegistroNBA::imprimir_folha_consolidada_time(std::string nome_time){
    this->_times[nome_time].imprimir_folha_salarial_consolidada();
    std::cout<<std::endl;
}
void RegistroNBA::imprimir_folha_salarial_geral(){
    std::map<std::string,Time>::iterator it;
    std::ostringstream oss;
    std::list<std::string>::iterator itr;
    std::list<std::string> nomeTimes;
    for(it = _times.begin(); it != _times.end(); it++){
        nomeTimes.push_back(it->first);
    }
    nomeTimes.sort();
    for(itr = nomeTimes.begin(); itr != nomeTimes.end(); itr++){
        std::string name(*itr);
        this->imprimir_folha_consolidada_time(name);
        std::cout<<std::endl;
    }
}