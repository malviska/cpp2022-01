#ifndef COORDENADA_H
#define COORDENADA_H
#include<vector>

class Coordenada{
    private:
        int row;
        int col;
    public:
    Coordenada();
    Coordenada(int, int);
    void getCoordenadasAdjacentes(std::vector<Coordenada>&, int, int);
    int getRow();
    int getCol();
};




#endif