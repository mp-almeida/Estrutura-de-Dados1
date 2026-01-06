#include "PilhaEstatica.h"
#include <iostream>

using namespace std;

//define o topo da pilha como 0
void criarPilha(Pilha *pilha){
    pilha->topo =0;
}


// Insere um item na pilha caso ela não esteja cheia
void inserirPilha(Pilha *pilha){

    if(pilha->topo < 5){
        //int valor;
        cout << "Informe o elemento que deseja inserir: ";
        cin >> pilha->dados[pilha->topo]; // valor
        cout << "VALOR INSERIDO\n";
        pilha->topo += 1; //sobe o topo
    }else{
        cout << "\nPilha esta CHEIA, nao pode inserir valores\n";
    }

}

void exibirElemento(Pilha *pilha){
    if(pilha->topo > 0){
        cout << "Ultimo elemento da pilha e:" << pilha->dados[pilha->topo - 1] << "\n";
    }else{
        cout << "Nao ha elementos na pilha\n";
    }
}


void removerElemento(Pilha *pilha){
    if(pilha->topo > 0){
       pilha->topo--;
       cout << "Elemento removido\n";
    }else{
        cout << "Nao ha elementos na pilha\n";
    }
}
