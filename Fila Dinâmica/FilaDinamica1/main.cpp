#include <iostream>
#include "FilaDinamica1.h"

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
                "4 - exibir ultimo elemento\n"
                "5 - exibir elementos da fila\n"
                "0 - sair do menu\n";
        cin >> opc;
        if(opc > 5){
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
                exibirElemento(fila, opc);
                break;
            case 5:
                exibirFila(fila);
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
