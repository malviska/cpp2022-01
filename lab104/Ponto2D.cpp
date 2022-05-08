#include "Ponto2D.hpp"

Ponto2D::Ponto2D(){}
Ponto2D::Ponto2D(double x, double y){
    _x = x;
    _y = y;
}
double Ponto2D::calcular_distancia(Ponto2D* ponto){
    double dx = ponto-> _x - this->_x;
    double dy = ponto-> _y - this->_y;
    return sqrt(dx*dx + dy*dy);
}
std::string Ponto2D::get_dados(){
    std::ostringstream value;
    value <<"["<<std::fixed<<std::setprecision(2)<< this->_x<<","<<this->_y<<"]";
    std::setprecision(2);
    std::string val = value.str();
    return val;
}