#include"Coordenada.hpp"

Coordenada::Coordenada(){}

Coordenada::Coordenada(int _row, int _col){
    this->row = _row;
    this->col = _col;
}

void Coordenada::getCoordenadasAdjacentes(std::vector<Coordenada>& adjacentes, int rowBoundary, int colBoundary){
    std::vector<int> rows = {-1,0,1};
    std::vector<int> cols ={-1,0,1};
    if(this->row == 0){
        rows.erase(rows.begin());
    }
    if(this->row == rowBoundary){
        rows.erase(rows.end() - 1);
    }
    if(this->col == 0){
        cols.erase(cols.begin());
    }
    if(this->col == colBoundary){
        cols.erase(cols.end() - 1);
    }
    for(auto i: rows){
        for(auto j: cols){
            if(i==0 && j ==0) continue;
            adjacentes.push_back(Coordenada(this->row + i,this->col + j));
        }
    }
}

int Coordenada::getRow(){
    return this->row;
}

int Coordenada::getCol(){
    return this->col;
}