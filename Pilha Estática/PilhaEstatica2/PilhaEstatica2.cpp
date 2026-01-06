#include "PilhaEstatica2.h"
#include <iostream>
#include <cstring>

using namespace std;

void criarPilha(Pilha *pilha){
    pilha->topo =0;
}

void inserirPilha(Pilha *pilha){
    if(pilha->topo < 5){
        cin.ignore();
        cout << "\nInsira nome: ";
        getline(cin, pilha->pessoa[pilha->topo].nome);
        cout << "\nInsira idade: ";
        cin >> pilha->pessoa[pilha->topo].idade;
        pilha->topo += 1;
    }else{
        cout << "\nPilha esta CHEIA";
    }
}

void exibirElemento (Pilha *pilha){
    if(pilha->topo > 0){
        cout << "O ultimo elemento da pilha e: "
        << pilha->pessoa[pilha->topo - 1].nome << " // "
        << pilha->pessoa[pilha->topo - 1].idade << "\n";
    }else{
        cout << "A pilha esta VAZIA";
    }
}

void removerElemento (Pilha *pilha){
    if(pilha->topo > 0){
        pilha->topo--;
        cout << "Elemento removido\n";
    }else{
        cout << "A pilha esta VAZIA";
    }
}
