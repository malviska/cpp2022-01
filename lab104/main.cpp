#include<iostream>
#include "Ponto2D.hpp"
#include "drone.hpp"
using namespace std;

int main() 
{
    Drone* dr = new Drone(1,Ponto2D(1,1),100);
    Drone* dr2 = new Drone(2, Ponto2D(2,2), 100);
    Drone* dr3 = new Drone(3,Ponto2D(3,3),100);
    Drone* dr4 = new Drone(4, Ponto2D(4,4),100);
    Drone* dr5 = new Drone(5,Ponto2D(5.00,5), 100);
    Drone* arr[5];
    arr[0] = dr;
    arr[1] = dr2;
    arr[2] = dr3;
    arr[3] = dr4;
    arr[4] = dr5;
    cout<< dr->_energia<<endl;
    dr->mover(4,M_PI*0.5,0.5);
    cout<< dr->_energia<<endl;

    dr->broadcast_mensagem(arr,5);
    dr3->broadcast_mensagem(arr,5);
    dr5->broadcast_mensagem(arr,5);
    dr4->broadcast_mensagem(arr,5);
    dr2->imprimir_mensagens_recebidas();
    dr3->mover(2,0,1);
    dr3->broadcast_mensagem(arr,5);
    dr4->mover(1,M_PI/2,1);
    dr4->broadcast_mensagem(arr,5);
    dr2->imprimir_mensagens_recebidas();

    Drone* a1 = new Drone(0,Ponto2D(0,0),3);
    Drone* a2 = new Drone(1,Ponto2D(2,0),3);
    Drone* arr2[2];
    arr2[0] = a1;
    arr2[1] = a2;
    a1->broadcast_mensagem(arr2,2);
    a1->mover(1,0,1);
    a1->broadcast_mensagem(arr2,2);
    a1->mover(1,0,1);
    a1->broadcast_mensagem(arr2,2);
    a1->mover(1,0,1);
    a1->broadcast_mensagem(arr2,2);
    a1->mover(1,0,1);
    a1->broadcast_mensagem(arr2,2);
    a1->mover(1,0,1);
    a1->broadcast_mensagem(arr2,2);
    a1->mover(1,0,1);
    a1->broadcast_mensagem(arr2,2);
    a2->imprimir_mensagens_recebidas();



    delete dr,dr2,dr3,dr4,dr5;
    return 0;
}