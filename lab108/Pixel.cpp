#include "Pixel.hpp"

Pixel::Pixel(): Pixel::Pixel(0,0,0){}

Pixel::Pixel(int red, int green, int blue){
    this->_blue = blue;
    this->_red = red;
    this->_green = green;
}

void Pixel::set_rgb(int red, int green, int blue) {
    this->_blue = blue;
    this->_red = red;
    this->_green = green;
}
std::vector<int> Pixel::get_rgb(){
    std::vector<int> vec = {this->_red,this->_green,this->_blue};
    return vec;
}
void Pixel::print(){
    std::cout<<std::setfill('0')<<std::setw(3)<<this->_red;
    std::cout<<std::setfill('0')<<std::setw(3)<<this->_green;
    std::cout<<std::setfill('0')<<std::setw(3)<<this->_blue;
}
