// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_nba.hpp"

int main() 
{
    RegistroNBA nba;
    char k;
    string nome_time, nome_jogador, posicao;
    int salario;
    while(cin>>k){
        switch(k){
            case 't':
                cin>>nome_time;
                nba.adicionar_time(nome_time);
                break;
            case 'j':
                cin>>nome_time>>nome_jogador>>posicao>>salario;
                nba.adicionar_jogador(nome_time,nome_jogador,posicao,salario);
                break;
            case 'l':
                cin>>nome_time;
                nba.imprimir_lista_jogadores_time(nome_time);
                break;
            case 'f':
                cin>> nome_time;
                nba.imprimir_folha_consolidada_time(nome_time);
                break;
            case 'g':
                nba.imprimir_folha_salarial_geral();
                break;
            case 'b':
                avaliacao_basica();
                break;
        }
    }
    return 0;
}