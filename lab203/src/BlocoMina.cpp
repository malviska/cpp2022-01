#include"BlocoMina.hpp"
#include"BlocoContador.hpp"

BlocoMina::BlocoMina(std::vector<std::vector<Bloco*>>& tabuleiro, Coordenada _coord){
    this->valor = -1;
    this->coord = _coord;
    this->revelado = false;
    int cols = tabuleiro[0].size();
    int rows = tabuleiro.size();
    std::vector<Coordenada> adjacentes;        
    this->coord.getCoordenadasAdjacentes(adjacentes, rows-1, cols-1);
    for(auto i: adjacentes){
        if(tabuleiro[i.getRow()][i.getCol()]->getValue() == 0){
            delete tabuleiro[i.getRow()][i.getCol()];
            Bloco* b = new BlocoContador(i);
            BlocoContador* bc = dynamic_cast<BlocoContador*>(b);
            bc->incrementarValor();
            tabuleiro[i.getRow()][i.getCol()] = bc;
        }else if(tabuleiro[i.getRow()][i.getCol()]->getValue() > 0){
            BlocoContador* bc = dynamic_cast<BlocoContador*>(tabuleiro[i.getRow()][i.getCol()]);
            bc->incrementarValor();
        }
    }
}

BlocoMina::~BlocoMina(){}

bool BlocoMina::revelar(std::vector<std::vector<Bloco*>>& tabuleiro){
    this->revelado = true;
    for(auto i: tabuleiro){
        for(auto j: i){
            if(!(j->ehRevelado())){
               j->setRevelado();
            }
        }
    }
    return false;
}
