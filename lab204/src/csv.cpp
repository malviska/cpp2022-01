#include"csv.hpp"

void CSV::split(std::string& str, std::vector<std::string>& out){
    std::string token = str.substr(0, str.find(";"));
    out.push_back(token);
    if (str.find(";") != std::string::npos){
        std::string val = str.substr(str.find(";")+1, str.size());
        this->split(val, out);
    }
}

std::string CSV::getHeader(IReadable& object){
    std::vector<std::string> vec;
    object.GetCampos(vec);
    return vec[0] + ";" + vec[1] + ";" + vec[2];
}

void CSV::readLine(std::string& head, std::string& line, IReadable& object){
    std::vector<std::string> vec1, vec2;
    this->split(head, vec1);
    this->split(line, vec2);
    for(unsigned int i =0; i<vec1.size(); i++) object.setAtributo(vec1[i], vec2[i]);
}

std::string CSV::write(IReadable& object){
    std::vector<std::string> vec1;
    std::string str = "";
    object.GetCampos(vec1);
    for(unsigned int i =0; i<vec1.size(); i++) str += object.GetAtributo(vec1[i]) ;
    return str;
}
