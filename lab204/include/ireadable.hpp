#ifndef IREADABLE_H
#define IREADABLE_H
#include<iostream>
#include<vector>
#include<string>

class IReadable{
    protected:
        virtual void print(std::ostream&) = 0;
    public:
        virtual void GetCampos(std::vector<std::string>&) = 0;
        virtual void setAtributo(std::string, std::string) = 0;
        virtual std::string GetAtributo(std::string) = 0;
    friend std::ostream& operator<<(std::ostream&,IReadable&);
};

#endif