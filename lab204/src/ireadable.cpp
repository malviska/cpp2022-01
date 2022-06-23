#include"ireadable.hpp"

std::ostream& operator<<(std::ostream& out, IReadable& readable){
    readable.print(out);
    return std::cout<<std::endl;
}
