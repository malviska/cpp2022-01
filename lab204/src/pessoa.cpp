#include"pessoa.hpp"

void Pessoa::print(std::ostream& out){
    out<< "(nome = "<<this->nome<<", idade = "<<this->idade<<", CPF = "<<this->cpf<<")";
}

void Pessoa::GetCampos(std::vector<std::string>& out){
    out.push_back("nome");
    out.push_back("idade");
    out.push_back("cpf");
}

void Pessoa::setAtributo(std::string key, std::string valor){
    if(key == "nome"){
        this->nome = valor;
    }else if(key == "idade"){
        this->idade = std::stoi (valor);
    }else if(key == "CPF" || key == "cpf"){
        this->cpf = std::stoul (valor);
   }else {}
}

std::string Pessoa::GetAtributo(std::string key){
    std::stringstream ss1, ss2;
    ss1<<this->idade;
    ss2<<this->cpf;
    if(key == "nome") return this->nome + ";";
    else if(key == "idade") return ss1.str() + ";";
    else if(key == "cpf") return ss2.str();
    else return "";
}

bool Pessoa::operator==(Pessoa& rhs){
    return (rhs.cpf == this->cpf);
}
