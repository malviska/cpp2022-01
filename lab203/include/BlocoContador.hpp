#ifndef BLOCOCONTADOR_H
#define BLOCOCONTADOR_H
#include"Bloco.hpp"

class BlocoContador: public Bloco{
    public:
        BlocoContador(Coordenada);
        virtual bool revelar(std::vector<std::vector<Bloco*>>&) override;
        virtual ~BlocoContador();
        void incrementarValor();    
};

#endif
