#include <iostream>
#include "FilaDinamica2.h"
using namespace std;

int main()
{
    int opc;
    Fila *fila = criarFila();

    do{
        cout << "\n"
                "Fila Dinamica\n"
                "1 - inserir elemento\n"
                "2 - remover elemento\n"
                "3 - exibir primeiro elemento\n"
                "4 - exibir elementos da fila\n"
                "5 - exibir ultimo elemento\n"
                "6 - exibir fila inversa\n"
                "7 - exibir quantidade de elementos na fila\n"
                "0 - sair do menu\n";
        cin >> opc;
        if(opc > 7){
            cout << "Opcao Invalida!!!\n";
        }
        switch(opc){
            case 1:
                inserirElemento(fila);
                break;
            case 2:
                removerElemento(fila);
                break;
            case 3:
                exibirElemento(fila, opc);
                break;
            case 4:
                exibirFila(fila);
                break;
            case 5:
                exibirElemento(fila, opc);
                break;
            case 6:
                exibirInverso(fila);
                break;
            case 7:
                exibirQuantidade(fila);
                break;
            case 0:
                deletarFila(fila);
                cout << "Saindo do menu... Thanks (- <)>\n";
                //delete
                break;
        }
    }while(opc != 0);
    return 0;
}
