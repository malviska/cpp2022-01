#ifndef FILE_H
#define FILE_H
#include"ireadable.hpp"

class File{
    public:
        virtual void readLine(std::string&, std::string&, IReadable&) = 0;
        virtual std::string write(IReadable&) = 0;
};
#endif