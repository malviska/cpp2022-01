#ifndef PESSOA_H
#define PESSOA_H
#include"ireadable.hpp"
#include<sstream>

class Pessoa : public IReadable{
    private:
        std::string nome;
        int idade;
        unsigned long cpf;
    protected:
        virtual void print(std::ostream&) override;
    public:
        virtual void GetCampos(std::vector<std::string>&) override;
        virtual void setAtributo(std::string, std::string) override;
        virtual std::string GetAtributo(std::string) override;
    bool operator==(Pessoa&);
};

#endif