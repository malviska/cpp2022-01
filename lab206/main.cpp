// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_excecoes.hpp"

int main() {
    char t;
    int max_size, k;
    LimitedQueue* Queue = new LimitedQueue(5);
    while(cin>>t){
        if(t == 'i'){
            cin>>max_size;
            Queue = new LimitedQueue(max_size); 
        }
        if(t == 'p'){
            cin>>k;
            Queue->push_back(k);
        }
        if(t == 'o'){
            Queue->pop_front();
        }
        if(t == 'f'){
            int val  = Queue->front();
            if(val != -1) std::cout<<val<<'\n';
        }
        if(t== 'l'){
            int val = Queue->back();
            if(val != -1) std::cout<<val<<'\n';
        }
        if(t == 'm'){
            Queue->print();
        }
        if(t == 'd'){
            cin>>k;
            int val = Queue->find(k);
            if(val != -1) std::cout<<val<<'\n';
        }
        if(t == 'b'){
            avaliacao_basica();
        }
    }
    delete Queue;

    return 0;
}