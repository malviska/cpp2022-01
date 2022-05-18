#include "Imagem.hpp"
#include<sstream>

void Imagem::initialize_image(int width, int height){
    this->_height = height;
    this->_width = width;
    std::vector<std::vector<Pixel>> matrix(this->_height, std::vector<Pixel>(this->_width,Pixel(0,0,0)));
    this->_matrix = matrix;
}
void Imagem::fill(int row, int col, std::string pixel){
    int red = std::stoi (pixel.substr(0,3));
    int green = std::stoi (pixel.substr(3,3));
    int blue = std::stoi (pixel.substr(6,3));
    this->_matrix[row][col].set_rgb(red,green,blue);
}
void Imagem::to_grayscale(){
    std::vector<std::vector<Pixel>>::iterator it;
    std::vector<Pixel>::iterator itr;
    std::ostringstream oss;
    int m = 0,n = 0;
    for(it = this->_matrix.begin(); it != this->_matrix.end(); it++){
        for(itr = it->begin(); itr != it->end(); itr++){
            int sum = itr->get_rgb()[0] + itr->get_rgb()[1] + itr->get_rgb()[2];
            int mean = sum/3;
            oss<<std::setfill('0')<<std::setw(3)<<mean<<std::setfill('0')<<std::setw(3)<<mean<<std::setfill('0')<<std::setw(3)<<mean;
            std::string vals = oss.str();
            this->fill(m,n,vals);
            n++;
            vals = "";
            oss.str(std::string());
        }
        m++;
        n =0;
    }

}
void Imagem::grayscale_thresholding(int lim){
    std::vector<std::vector<Pixel>>::iterator it;
    std::vector<Pixel>::iterator itr;
    int m = 0,n = 0;
    for(it = this->_matrix.begin(); it != this->_matrix.end(); it++){
        for(itr = it->begin(); itr != it->end(); itr++){
           if(int sum = itr->get_rgb()[0] > lim){
               this->fill(m,n,"255255255");
           }else{
               this->fill(m,n,"000000000");
           }
           n++;
        }
        m++;
        n =0;
    }
}
void Imagem::show(){
    std::vector<std::vector<Pixel>>::iterator it;
    std::vector<Pixel>::iterator itr;
    int m = 0,n = 0;
    for(it = this->_matrix.begin(); it != this->_matrix.end(); it++){
        for(itr = it->begin(); itr != it->end(); itr++){
            itr->print();
            std::cout<<" ";
        }
        m++;
        n =0;
        std::cout<<std::endl;
    }
}

void Imagem::fillMatrix(){
    std::vector<std::vector<Pixel>>::iterator it;
    std::string values;
    std::vector<Pixel>::iterator itr;
    int m = 0,n = 0;
    for(it = this->_matrix.begin(); it != this->_matrix.end(); it++){
        for(itr = it->begin(); itr != it->end(); itr++){
            std::cin>>values;
            this->fill(m,n,values);
            n++;
        }
        m++;
        n =0;
        std::cout<<std::endl;
    }
}