#include "drone.hpp"
#include "Ponto2D.hpp"

Drone::Drone(int id, Ponto2D* p, double raio){
    _id = id;
    _ponto = p;
    _raio = raio;
}
void Drone::mover(double v, double th, double t){
    double x_new = v*t*cos(th) + this->_ponto->_x;
    double y_new = v*t*sin(th) + this->_ponto->_y;
    Ponto2D* p2 = new Ponto2D(x_new,y_new);
    double dis = this->_ponto->calcular_distancia(p2);
    _energia = this->_energia - dis;
    if(_energia <= 50){
        std::cout<< "Alerta, energia baixa!"<<'\n';
    }
}
double Drone::calcular_distancia(Drone* dr2){
    return this->_ponto->calcular_distancia(dr2->_ponto);
}
void Drone::broadcast_mensagem(Drone** arr[], int n){
    std::ostringstream oss;
    oss << "Drone: "<< this->_id<<", Posição: "<< this->_ponto->get_dados();
    std::string val = oss.str();
    for(int i = 0; i< n; i++){
        double dis = this->calcular_distancia(*arr[i]);
        if(dis<=this->_raio){
            (*arr[i])->salvar_mensagem(val);
        }
    }
}
void Drone::salvar_mensagem(std::string salvar_mensagem){
    if(this->_buf == &this->_buffer[4]){
        *_buf = salvar_mensagem; 
        this->_buf = &this->_buffer[0];
    }else{
        *_buf = salvar_mensagem;
        _buf++;
    }

}
void Drone::imprimir_mensagens_recebidas(){ 
    std::map<std::string,std::vector<std::string>> resource;
    std::map<std::string,std::vector<std::string>>::iterator it;
    for(int i =0; i<5; i++){
        std::size_t pos = this->_buffer[i].find(",");
        if(pos == std::string::npos){
            break;
        }
        std::string sub = this->_buffer[i].substr(7,pos-7);
        if(resource.find(sub) == resource.end()){
            resource[sub] = {_buffer[i]};
        }else{
            resource[sub].push_back(_buffer[i]);
        }
    }
    for(it = resource.begin();it!=resource.end(); it++){
        std::cout<<"Mensagens de "<<it->first<<":\n";
        std::vector<std::string>::iterator it2;
        for(it2 = it->second.begin();it2!=it->second.end(); it2++){
            std::cout<<*it2<<std::endl;
        }
    }
}
void Drone::imprimir_status(){
    std::cout<<this->_id<<'\t'<<this->_ponto->_x<<'\t'<<this->_ponto->_y<<'\t'<<this->_energia<<'\n';
}