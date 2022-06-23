#ifndef CSV_H
#define CSV_H
#include"file.hpp"

class CSV : public File{
    private:
        void split(std::string&, std::vector<std::string>&);
    public:
        std::string getHeader(IReadable&);
        virtual void readLine(std::string&, std::string&, IReadable&) override;
        virtual std::string write(IReadable&) override;
};

#endif