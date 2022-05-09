#include "FilaAtendimento.hpp"

void FilaAtendimento::adicionar_cliente(std::string nome, int idade){
    Cliente* newClient = new Cliente(nome,idade,0);
    Node* listClient = new Node;
    Node* i = new Node;
    listClient->_cliente = *newClient;
    listClient->_next = nullptr;
    if(head == nullptr){
        head = listClient;
        head->_next = tail;
        tail = listClient;
        listClient->_cliente._senha = 1;
    }else{
        if(newClient->eh_prioritario()){
            i = head;
            while (i->_cliente.eh_prioritario())
            {
                i= i->_next;
                newClient->_senha +=1;
            }
            i->_next = i;
            i->_cliente = *newClient;
        }else{
            tail = listClient;
            listClient->_cliente._senha = tail->_next - head->_next +1;
        }
    }
    
}
void FilaAtendimento::imprimir_fila(){
    Node* aux = head;
    while(aux != nullptr){
        aux->_cliente.imprimir_dados();
        aux = aux->_next;
    }
}