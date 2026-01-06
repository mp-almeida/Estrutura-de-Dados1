#include <iostream>
#include "PilhaDinamica01.h"

using namespace std;

int main()
{
    char opc;

    Pilha *topo = criarPilha();

    do{

        cout << "Informe a opcao desejada!\n"
                "1- inserir um elemento\n"
                "2- exibir um elemento\n"
                "3- remover o topo da pilha\n"
                "0- sair\n"
                "---->\n";
        //cin.ignore();
        cin >> opc;

        switch(opc){
        case '1':
            inserirElemento(topo);
            break;
        case '2':
            exibirElemento(topo);
            break;
        case '3':
            removerElemento(topo);
            break;
        case '0':
            liberarPilha(topo);
        break;
            default: cout << "Opcao invalida!\n";
        }
    }while(opc != '0');

    return 0;
}
