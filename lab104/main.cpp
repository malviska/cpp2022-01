#include<iostream>
#include "Ponto2D.hpp"
#include "drone.hpp"
using namespace std;

int main() 
{
    Ponto2D* p1 = new Ponto2D(3.575234,4.82134);
    Ponto2D* p2 = new Ponto2D(7,-3.4);
    Ponto2D* p3 = new Ponto2D(0.2134,1.245);
    Ponto2D* p4 = new Ponto2D(1.5,9.8);
    Ponto2D* p5 = new Ponto2D(23.12,11.245);
    Drone* dr = new Drone(1234,p1,30.23);
    Drone* dr2 = new Drone(1342, p2, 100);
    Drone* dr3 = new Drone(11111,p3,10);
    Drone* dr4 = new Drone(12, p4,5);
    Drone* dr5 = new Drone(13,p5, 50);
    Drone** arr[5];
    arr[0] = &dr;
    arr[1] = &dr2;
    arr[2] = &dr3;
    arr[3] = &dr4;
    arr[4] = &dr5;
    cout<< p1->calcular_distancia(p2)<<endl;
    cout<< p1->get_dados()<<endl;
    cout<< dr->_energia<<endl;
    dr->mover(4,M_PI*0.5,0.5);
    cout<< dr->_energia<<endl;

    dr->broadcast_mensagem(arr,5);
    dr3->broadcast_mensagem(arr,5);
    dr5->broadcast_mensagem(arr,5);
    dr4->broadcast_mensagem(arr,5);
    dr2->imprimir_mensagens_recebidas();
    delete p1, p2, dr;
    return 0;
}