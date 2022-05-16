#include "FilaAtendimento.hpp"


void FilaAtendimento::adicionar_cliente(std::string nome, int idade){
    Cliente* newClient = new Cliente(nome,idade,_senha);
    _senha++;
    Node* listClient = new Node;
    listClient->_cliente = *newClient;
    listClient->_next = nullptr;
    if(head == nullptr){
        head = listClient;
        tail = listClient;
        head->_next = tail;
        tail->_next = nullptr;
        listClient->_cliente._senha = 1;
    }else if(newClient->eh_prioritario()) this->ePreferencial(head, listClient);
    else this->naoPreferencial(head, listClient);
}
void FilaAtendimento::imprimir_fila(){
    Node* aux = head;
    while(aux != nullptr){
        aux->_cliente.imprimir_dados();
        aux = aux->_next;
    }
}
Cliente* FilaAtendimento::chamar_cliente(){
    Cliente* prox = nullptr;
    if(this->head == nullptr) std::cout<<"Fila vazia!"<<std::endl;
    else{
        prox = new Cliente(this->head->_cliente);
        this->head = this->head->_next;
    }
    return prox;
}
void FilaAtendimento::estimativa_tempo_espera(int num){
    int tempo = 0;
    Node* list = this->head;
    while(list->_cliente._senha != num){
        tempo += list->_cliente.tempo_estimado_atendimento();
        list = list->_next;
    }
    std::cout<< "Tempo estimado para atender " << list->_cliente._nome << " eh "<< tempo << " minutos.\n";
}
void FilaAtendimento::ePreferencial(Node*& list, Node* celula) {
    if(!(list->_cliente.eh_prioritario())){
        celula->_next = list;
        list = celula;
    }else return this->ePreferencial(list->_next, celula);
}
void FilaAtendimento::naoPreferencial(Node*list, Node* celula){
    if(list == tail){
        list->_next = celula;
        tail = celula;
    }else return this->naoPreferencial(list->_next, celula);
}

