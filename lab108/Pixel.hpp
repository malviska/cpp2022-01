#ifndef Pixel_H
#define Pixel_H
#include<iostream>
#include<vector>
#include<iomanip>

class Pixel
{
    public:
        int _red, _green,_blue;
        Pixel();
        Pixel(int, int, int);
        void set_rgb(int, int, int);
        std::vector<int> get_rgb();
        void print();
};



#endif