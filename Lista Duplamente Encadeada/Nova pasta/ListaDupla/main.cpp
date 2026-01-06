#include <iostream>
#include "listaDupla.h"
#include<windows.h>

using namespace std;
char menuInicial();
char menuSaida();

int main(){
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    int menu;
    int inf;
    Lista* lista = criarLista();
    do{
        cout <<"\n --------- Menu --------\n"
            "1 - para inserir um elemento na lista ordenada dupla\n"
            "2 - para remover um elemento da lista ordenada dupla\n"
            "3 - exibir elementos cadastrados\n"
            "4 - verificar se uma informação está na lista dupla.\n"
            "5 - verificar posicao, par/impar e exibir\n"
            "0 - sair do menu.\n"
            "--> ";

        cin>>menu;

        switch(menu){
        case 1:
            cout << "Informe o elemento a ser inserido na lista: ";
            cin >> inf;
            inserirElementoListaDupla(lista, inf);
            break;
        case 2:
            cout << "Informe o elemento a ser removido da lista: ";
            cin >> inf;
            removerElementoListaDupla(lista, inf);
            break;
       case 3:
            exibirElementosListaDupla(lista);
            break;
        case 4:
           // verificar se um determinado elemento está na lista
            cout << "Informe o elemento a ser consultado da lista: ";
            cin >> inf;
            consultarElementoListaDupla(lista, inf);
            break;
        case 5:
            consultarNumParPosicao(lista);
            break;
        case 0:
            cout <<"Saindo do programa!\n";
            break;
        default: cout<< "Opção inválida!";
        }
        cout<<"\n-------------------\n\n";
    }while(menu != 0);
    excluirListaDupla(lista);
    return 0;
}
