#ifndef BLOCO_H
#define BLOCO_H
#include<string>
#include<sstream>
#include"Coordenada.hpp"

class Bloco{
    protected:
        Coordenada coord;
        bool revelado;
        int valor;
    public:
        Bloco();
        Bloco(Coordenada);
        virtual ~Bloco();
        virtual bool revelar(std::vector<std::vector<Bloco*>>&);
        std::string getSimbolo();
        bool ehRevelado();
        int getValue();
        void setRevelado();
};

#endif