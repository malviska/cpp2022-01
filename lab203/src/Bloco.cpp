#include"Bloco.hpp"

Bloco::Bloco(){}

Bloco::Bloco(Coordenada _coord){
    this->coord = _coord;
    this->revelado = false;
    this->valor = 0;
}

Bloco::~Bloco(){}

bool Bloco::revelar(std::vector<std::vector<Bloco*>>& tabuleiro){
    int cols = tabuleiro[0].size();
    int rows = tabuleiro.size();
    std::vector<Coordenada> adjacentes;
    if(!this->revelado){
        this->revelado = true;
        this->coord.getCoordenadasAdjacentes(adjacentes, rows-1, cols-1);
        for(auto i: adjacentes){
            if(!(tabuleiro[i.getRow()][i.getCol()]->ehRevelado()))
                tabuleiro[i.getRow()][i.getCol()]->revelar(tabuleiro);   
        }   
    }
    return true;
}

int Bloco::getValue(){
    return this->valor;
}

bool Bloco::ehRevelado(){
    return this->revelado;
}

std::string Bloco::getSimbolo(){
    if(!this->ehRevelado()) return "#";
    else if(this->getValue() == -1) return "*";
    else{
        std::stringstream ss;
        ss<<this->getValue();
        return ss.str();
    }
}

void Bloco::setRevelado(){
    this->revelado = true;
}