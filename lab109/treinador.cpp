#include"treinador.hpp"

Treinador::Treinador(){};
Treinador::Treinador(std::string _nome){
    this->nome = _nome;
    this->health_balls = {};
    this->evolution_balls = {};

}
Treinador::~Treinador(){
    for(auto i: this->health_balls){
        delete i;
    }
    for(auto i: this->evolution_balls){
        delete i;
    }
}
HealthBall* Treinador::selecionarHealthBall(int _id){
    for(auto i: this->health_balls){
        if(i->getId() == _id){
            return i;   
        }
    }
    return nullptr;
}
EvolutionBall* Treinador::selecionarEvolBall(int _id){
    for(auto i: this->evolution_balls){
        if(i->getId() == _id){
            return i;
        }
    }
    return nullptr;
}
void Treinador::adicionarPokebola(HealthBall* pokebola){
   this->health_balls.push_back(pokebola);
}
void Treinador::adicionarPokebola(EvolutionBall* pokebola){
    this->evolution_balls.push_back(pokebola);
}
void Treinador::listarPokemons(){
    std::cout<<"Treinador: "<<this->nome<<std::endl;
    for(auto i: this->health_balls){
        std::cout<<"HealthBall ID: "<<i->getId()<<std::endl;
        if(i->getPokemon() == nullptr){
            std::cout<< "A pokebola não possui um pokemon\n";
        }else{
            i->getPokemon()->info();
        }
    }
    for(auto i: this->evolution_balls){
        std::cout<<"EvolutionBall ID: "<< i->getId()<<std::endl;
        if(i->getPokemon() == nullptr){
            std::cout<<"A pokebola não possui um pokemon\n";
        }else{
            i->getPokemon()->info();
        }
    }
    if(this->evolution_balls.empty() && this->health_balls.empty()) std::cout<< "O treinador não possui pokebolas\n";
}