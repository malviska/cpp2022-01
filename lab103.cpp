#include<iostream>
using namespace std;

int main(){

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int i;
    cin >> i; 
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int * pointer;
    int p = 0;
    pointer = &p;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com os dados passados
    int k;
    cin>>k;
    int vector[k];
    for(int l = 0; l<i; l++){
        cin>>vector[l];
    }

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout<<&i<<endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    cout<<i<<endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout<<pointer<<endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    cout<<*pointer<<endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout<<vector<<endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout<<&vector[0]<<endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout<<vector[0]<<endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    pointer = &i;

    // 12) Imprima o VALOR da variável declarada em (2)
    cout<<pointer<<endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*pointer<<endl;

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
    cout<<(&i==pointer)<<endl;

    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *pointer = 5;

    // 16) Imprima o VALOR da variável declarada em (1)
    cout<<i<<endl;

    // 17) Atribua o ENDEREÇO da variável (3) à variável declarada em (2)
    pointer = vector;

    // 18) Imprima o VALOR da variável declarada em (2)
    cout<<pointer<<endl;

    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*pointer<<endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    pointer = &vector[0];

    // 21) Imprima o VALOR da variável declarada em (2)
    cout<<pointer<<endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*pointer<<endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(int l = 0; l<k; l++){
        *(pointer+l) *= 10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(int l = 0; l<k; l++){
        cout<<vector[l]<<" ";
    }
    cout<<endl;


    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    for(int l = 0; l<k; l++){
        cout<< *(&vector[0]+l)<< " ";
    }
    cout<<endl;
    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    for(int l = 0; l<k; l++){
        cout<<*(pointer + l)<<" ";
    }
    cout<<endl;

    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    pointer = &vector[4];

    // 28) Imprima o VALOR da variável declarada em (2)
    cout<<pointer<<endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*pointer<<endl;

    // 30) Imprima o VALOR guardado no ENDEREÇO do ponteiro (2) decrementado de 4
    cout<<*(pointer-4)<<endl;

    // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int ** pointer2;
    pointer2 = &pointer;

    // 32) Imprima o VALOR da variável declarada em (31)
    cout<<pointer2<<endl;

    // 33) Imprima o ENDEREÇO da variável declarada em (31)
    cout<<&pointer2<<endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
    cout<<*pointer2<<endl;

    // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)
    cout<<**pointer2<<endl;
    
    return 0;
}