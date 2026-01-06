#include <iostream>
#include "PilhaEstatica.h"
using namespace std;


int main()
{
    int opc;

    Pilha pilha;

    criarPilha(&pilha);

    do{
        cout << "\nInforme a opcao desejada:\n";
        cout << "1 - para inserir um elemeto na pilha\n";
        cout << "2 - para exibir o topo\n";
        cout << "3 - para remover um elemento da pilha\n";
        cout << "0 - para sair do menu\n";

        cin >> opc;
        switch(opc){
        case 1:
            inserirPilha(&pilha);
            break;
        case 2:
            exibirElemento(&pilha);
            break;
        case 3:
            removerElemento(&pilha);
            break;
        case 0:
            break;
        default:
            cout << "Opcao invalida!\n";
        }
    }while(opc != 0);
    return 0;

}

