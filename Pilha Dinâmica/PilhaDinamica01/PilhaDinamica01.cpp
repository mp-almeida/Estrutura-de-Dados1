#include "PilhaDinamica01.h"
#include <iostream>

using namespace std;


Pilha* criarPilha(){
    Pilha *topo = new (std::nothrow) Pilha;

    if(topo != nullptr){
        cout << "Erro da alocação de memorio";
        //exit();
    }

    cout << "Pilha CRIADA\n";
    *topo = nullptr; // a pilha passa a existir - pois o topo = 0 (não há elementos)
    //topo->prox = nullptr;

    return topo;
}

void liberarPilha(Pilha *topo){
    if(topo != nullptr){
        No *noAux;
        while((*topo) != nullptr){// deleta item por item (pilha por pilha) até que o topo seja = 0
            noAux = *topo;
            *topo = noAux->prox;
            delete noAux;

            //ou chamar removerElemento(Pilha *topo);
        }
        delete topo;
    }
}

// verificar se a pilha está vazia
int pilhaVazia (Pilha *topo){
    int ehvazia=1;
    if(*topo == nullptr){
        cout << "Pilha esta vazia!\n";
        ehvazia=0;
    }
    return ehvazia;
}

void inserirElemento(Pilha *topo){
    No *novoNo = new (std::nothrow) No;

    if(novoNo == nullptr){
        cout << "Não é possível alocar memoria! Struct já preenchida!\n";

    }else{
        cout << "Insira o valor: ";
        cin >> novoNo->valor;
        novoNo->prox = nullptr;

        if(*topo == nullptr){ //se a pilha estiver vazia, o topo aponta para o novo elemento
            *topo = novoNo;
        }else{//se a pilha estiver vazia, o topo vai apontar
            novoNo->prox = *topo; // a nova pilha(elemento) aponta para a pilha anterio para
            *topo= novoNo; // obter o topo

            // prox sempre aponta para a próxima pilha
        }
    }
}

void exibirElemento(Pilha *topo){
    int x;
    x = pilhaVazia(topo);
    if(x != 0){//pilha não está vazia
        No *noAux = *topo;
        cout << "Ultimo elemento da pilha: " << noAux->valor << "\n";
    }else{
        cout << "Pilha esta VAZIA\n";
    }
}

void removerElemento(Pilha *topo){
    int x;
    x = pilhaVazia(topo);
    if( x != 0){
        No *noAux = *topo; // cria um ponteiro noAux que aponta para onde o TOPO aponta
        *topo = noAux->prox; //topo aponta para o valor anterior
        delete noAux; // deleta o topo

        cout << "Elemento REMOVIDO\n";
    }else{
        cout << "Nao tem elementos na pilha!!\n";
    }
}

