#include <iostream>
#include "ListaDuplamenteEncadeada.h"

using namespace std;

int main()
{
    int opc, dado;
    Lista *lista = criarLista();


    do{
        cout << "\n"
                "Lista Encadeada Dupla\n"
                "1 - inserir elemento\n"
                "2 - remover elemento\n"
                "3 - consultar elemento\n"
                "4 - exibir elementos da lista dupla\n"
                "5 - exibir quantidade de num pares\n"
                "0 - sair do menu\n";
        cin >> opc;
        if(opc > 5){
            cout << "Opcao Invalida!!!\n";
        }
        switch(opc){
            case 1:
                cout << "\nInsira dado: ";
                cin >> dado;
                inserirElemento(lista, dado);
                break;
            case 2:
                cout << "\nInsira dado: ";
                cin >> dado;
                removerElemento(lista,dado);
                break;
            case 3:
                cout << "\nInsira dado para consultar: ";
                cin >> dado;
                consultarElemento(lista, dado);
                break;
            case 4:
                exibirElementosListaDupla(lista);
                break;
            case 5:
                exibirQuantidadeElementosPares(lista);
                break;
            case 0:
                cout << "Saindo do menu... Thanks p)>\n";
                //delete
                break;
        }
    }while(opc != 0);
    return 0;
}
