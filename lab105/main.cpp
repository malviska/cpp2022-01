#include<iostream>
#include "FilaAtendimento.hpp"
using namespace std;
int main ()
{
    FilaAtendimento fila;
    fila.adicionar_cliente("João", 22);
    fila.adicionar_cliente("José", 44);
    fila.adicionar_cliente("Genivaldo", 70);
    fila.imprimir_fila();
}