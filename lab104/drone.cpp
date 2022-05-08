#include "drone.hpp"
#include "Ponto2D.hpp"

Drone::Drone(int id, Ponto2D p, double raio){
    _id = id;
    _ponto = p;
    _raio = raio;
}
void Drone::mover(double v, double th, double t){
    double x_new = v*t*cos(th) + this->_ponto._x;
    double y_new = v*t*sin(th) + this->_ponto._y;
    Ponto2D* p2 = new Ponto2D(x_new,y_new);
    double dis = this->_ponto.calcular_distancia(p2);
    _energia = this->_energia - dis;
    this->_ponto._x = x_new;
    this->_ponto._y = y_new;
    if(_energia <= 50){
        std::cout<< "Alerta, energia baixa!"<<'\n';
    }
}
double Drone::calcular_distancia(Drone* dr2){
    return this->_ponto.calcular_distancia(&(dr2->_ponto));
}
void Drone::broadcast_mensagem(Drone* arr[], int n){
    std::ostringstream oss;
    oss << "Drone: "<< this->_id<<", Posição: "<< this->_ponto.get_dados();
    std::string val = oss.str();
    for(int i = 0; i< n; i++){
        double dis = this->calcular_distancia(arr[i]);
        if(arr[i]->_id !=this->_id && dis<=this->_raio){
            (arr[i])->salvar_mensagem(val);
        }
    }
}
void Drone::salvar_mensagem(std::string salvar_mensagem){
    if(this->_buffer.size()< 5){
        this->_buffer.push_back(salvar_mensagem);
        this->_buf = &this->_buffer[sizeof(this->_buffer)/sizeof(this->_buffer[0])];
    }else if(_buf == &this->_buffer[4]){ 
       this->_buf = &this->_buffer[0];
        *this->_buf = salvar_mensagem;
    }else{
        *this->_buf = salvar_mensagem;
        this->_buf++;
    }

}
void Drone::imprimir_mensagens_recebidas(){ 
    std::cout<<"Mensagens de "<< this->_id<<":\n";
    for(std::string i : this->_buffer){
        std::cout<<i<<"\n";
    }
}
void Drone::imprimir_status(){
    std::cout<<this->_id<<'\t'<<this->_ponto._x<<'\t'<<this->_ponto._y<<'\t'<<this->_energia<<'\n';
}