#ifndef FilaAtendimento_H
#define FilaAntendimento_H
#include "Cliente.hpp"

struct Node {
    Cliente _cliente;
    Node* _next;
};

struct FilaAtendimento
{
    Node* head = nullptr;
    Node* tail = nullptr;
    void adicionar_cliente(std::string, int);
    Cliente* chamar_cliente();
    void estimativa_tempo_espera(int);
    void imprimir_fila();
};



#endif