#ifndef BLOCOMINA_H
#define BLOCOMINA_H
#include"Bloco.hpp"

class BlocoMina: public Bloco{
    public:
        BlocoMina(std::vector<std::vector<Bloco*>>&, Coordenada);
        virtual ~BlocoMina();
        virtual bool revelar(std::vector<std::vector<Bloco*>>&) override;       
};

#endif