#ifndef Imagem_H
#define Imagem_H
#include "Pixel.hpp"


class Imagem
{
    public:
        int _width, _height;
        std::vector<std::vector<Pixel>> _matrix;
        void initialize_image(int, int);
        void fill(int, int, std::string);
        void to_grayscale();
        void grayscale_thresholding(int);
        void show();
        void fillMatrix();
};


#endif