// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_imagem.hpp"

int main() 
{   
    char k;
    int width, height, lim;
    Imagem imagem;
    while(cin>>k){
        switch(k){
            case 'i':
                cin>>width>>height;
                imagem.initialize_image(width,height);
                break;
            case 'p':
                imagem.fillMatrix();
                break;
            case 's':
                imagem.show();
                break;
            case 'g':
                imagem.to_grayscale();
                break;
            case 't':
                cin>>lim;
                imagem.grayscale_thresholding(lim);
                break;
            case 'b':
                avaliacao_basica();
                break;
        }
    }
    return 0;
}