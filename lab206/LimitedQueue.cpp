#include"LimitedQueue.hpp"

LimitedQueue::LimitedQueue(int max_size){
    try
    {
        if(max_size<=0) throw InvalidSizeException();
        this->size = max_size;
    }
    catch(const InvalidSizeException& e)
    {
        std::cout<< "Excecao: " << e.err << '\n';
    }
    
}

void LimitedQueue::push_back(int k){
    try 
    {
        if(this->fila.size() == this->size) throw QueueFullException();
        this->fila.push_back(k);
    }
    catch(const QueueFullException& e)
    {
        std::cout<< "Excecao: " << e.err << '\n';
    }
}

void LimitedQueue::pop_front(){
    try
    {
        if(this->fila.empty()) throw QueueEmptyException();
        this->fila.pop_front();
    }
    catch(const QueueEmptyException& e)
    {
        std::cout<<"Excecao: " << e.err << '\n';
    }
}

int LimitedQueue::front(){
    try
    {
        if(this->fila.empty()) throw QueueEmptyException();
        return this->fila.front();
    }
    catch(const QueueEmptyException& e)
    {
        std::cout<<"Excecao: " << e.err << '\n';
        return -1;
    }
    
}

int LimitedQueue::back(){
    try
    {
        if(this->fila.empty()) throw QueueEmptyException();
        return this->fila.back();
    }
    catch(const QueueEmptyException& e)
    {
        std::cout <<"Excecao: "<< e.err << '\n';
        return -1;
    }
    
}

int LimitedQueue::find(int k){
    try
    {
        if(this->fila.empty()) throw QueueEmptyException();
        std::list<int>::iterator it;
        it = std::find(this->fila.begin(), this->fila.end(), k);
        if(it == this->fila.end()) throw ItemNotFoundException();
        return std::distance(this->fila.begin(), it);
    }
    catch(const QueueEmptyException& e)
    {
        std::cout<< "Excecao: " << e.err << '\n';
        return -1;
    }
    catch(const ItemNotFoundException& e)
    {
        std::cout<< "Excecao: " << e.err <<'\n';
        return -1;
    }
    
}

void LimitedQueue::print(){
    try
    {
        if(this->fila.empty()) throw QueueEmptyException();
        for(auto i: this->fila){
            std::cout<<i<<'\n';
        }
    }
    catch(const QueueEmptyException& e)
    {
        std::cout << "Excecao: " << e.err << '\n';
    }
    
}

int LimitedQueue::get_max_size(){return this->size;}