#include <iostream>
#include "FilaDinamica2.h"

using namespace std;


Fila* criarFila(){
    Fila *fila = new (std::nothrow) Fila;

    if(fila == nullptr){
        cout << "MEMORIA CHEIA - NAO FOI POSSIVEL CRIAR FILA!!\n";

        exit(0); // termina a execução do programa
    }

    fila->fim = nullptr;
    fila->inicio = nullptr;

    return fila;
}
int filaVazia(Fila *fila){
    if(fila->inicio == nullptr){
        cout << "FILA ESTA VAZIA!!!\n";
        return 0;
    }else{
        return 1;
    }
}


int inserirElemento(Fila *fila){
    No *novoNo = new (std::nothrow) No;
    int info;
        if (novoNo == nullptr){
            cout << "memoria NAO alocada\n";
            //Não faz o EXIT pois já pode ter sido inserido elementos e mostrar seria uma das funcionalidades para voltar ao menu
            return 0;
        }
    cout << "Informe um valor: ";
    cin >> novoNo->dados;
    novoNo->prox = nullptr; // SEMPRE cria novo elemento aponta prox para NULL

    if(fila->inicio == nullptr){
        fila->inicio = novoNo;
        fila->fim = novoNo;
    }else{
        fila->fim->prox = novoNo;
        fila->fim = fila->fim->prox; //novoNo;
    }
    cout << "ELEMENTO " << novoNo->dados << " INSERIDO\n";
    return 1;
}

void removerElemento(Fila *fila){
    if(filaVazia(fila) == 1){ // NÃO ESTÁ VAZIA
        No *noAux;

        noAux = fila->inicio;
        fila->inicio = fila->inicio->prox;
        if(fila->inicio == nullptr){ //Só tinha 1 elemento na fila, logo, atualiza o fim para NULL
            fila->fim = nullptr;
        }
        cout << "Elemento " << noAux->dados << " removido\n";
        delete noAux; // ele não está alocado dinamicamente, porém APONTA para quem está ALOCADO DINAMICAMENTE

    }
}

void exibirElemento(Fila *fila, int x){
    if(filaVazia(fila) == 0){
        cout << "FILA ESTA VAZIA\n";
    }

    if(x == 3){
        cout << "Primeiro elemento: " << fila->inicio->dados << "\n";
    }
    if(x == 5){
        cout << "Ultimo elemento: " << fila->fim->dados << "\n";
    }
}

void exibirFila(Fila *fila){
    if(filaVazia(fila) == 1){
        No *noAux = fila->inicio;
        while(noAux != nullptr){
            //for(noAux; i <= fila->fim; i++){
            cout << noAux->dados << " ";
            noAux = noAux->prox;
        }
        }
}

void exibirInverso(Fila *fila){
    if(filaVazia(fila) == 0){
        cout << "Fila VAZIA!!\n";
        return;
    }
    int tam = 0;
    No *noAux = fila->inicio;

    //copia dados para um vetor
    while(noAux != nullptr){
        tam++;
        noAux = noAux->prox;
    }

    int *vetInverso = new (std::nothrow) int[tam];
    noAux = fila->inicio;
    for(int i = 0; i < tam; i++){
        vetInverso[i] = noAux->dados;
        noAux = noAux->prox;
    }

    //exibir o inverso
    for(int i = tam - 1; i >=0; i--){
        cout << vetInverso[i] << " ";
    }
    cout << "\n";

    delete[] vetInverso;
}

void exibirQuantidade(Fila *fila){
    if(filaVazia(fila) == 0){
        cout << "Fila VAZIA!!\n";
    }
    No *noAux = fila->inicio;
    int qtd;
    while(noAux != nullptr){
        qtd += 1;
        noAux = noAux->prox;
    }
    cout << "Quantidade de elementos na fila " << qtd << "\n";
}

void deletarFila(Fila *fila){
    if(filaVazia(fila) == 0){
        cout << "FILA VAZIA\n";
    }
    No *noAux;
        while(fila->inicio == nullptr){
            noAux = fila->inicio;
            fila->inicio = fila->inicio->prox;
            delete noAux;
    }
    delete fila;
}
