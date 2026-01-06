#include "ListaDuplamenteEncadeada.h"
#include <iostream>

using namespace std;

Lista* criarLista (){
    Lista *lista = new (std::nothrow) Lista;

    if(lista == nullptr){
        cout << " Lista NAO alocada na memoria!!!";

        exit(0);
    }
    lista->qtd=0;
    lista->inicioLista= nullptr;
    return lista;
}

int listaVazia(Lista *lista){
    if(lista->inicioLista == nullptr){
        return 0;
    }else{
        return 1;
    }
}

void inserirElemento(Lista *lista, int inf){
    No *novoNo = new (std::nothrow) No;

    if(novoNo == nullptr){
        cout << "\nMemoria CHEIA!!!";
    }else{
       novoNo->dado = inf;
       novoNo->prox= nullptr;
       novoNo->ant = nullptr;

       if(listaVazia(lista) == 0){
            lista->inicioLista = novoNo;
            lista->qtd++;
       }else{
            // inserir de forma ordenada // crescente

            // então... verificar onde inserir

            No *noAux = lista->inicioLista; // aponta para o início

            while(noAux->prox != nullptr && novoNo->dado > noAux->dado){ // não é o final && o novoNo for maior que a comparação (noAux)
                noAux = noAux->prox;
                //anda para realizar a verificação SEM inserir
            }
            if(noAux == lista->inicioLista && inf < noAux->dado){ // inserção no INÍCIO da lista
                novoNo->prox = noAux;
                noAux->ant = novoNo;
                lista->inicioLista = novoNo;
            }else{
                if(noAux->prox == nullptr && inf > noAux->dado){
                 novoNo->ant = noAux;
                 noAux->prox = novoNo;
                }else{
                    //inserção no MEIO da lista
                    novoNo->prox = noAux;
                    novoNo->ant = noAux->ant; //noAux é o proximo do novoNo, logo, noAux->ant = ao anterior do novoNo
                    noAux->ant->prox = novoNo;
                    noAux->ant = novoNo;
                }
            }
        }
        lista->qtd++;
    }
}

void removerElemento(Lista *lista, int inf){
    if(listaVazia(lista)==0){
        cout <<"\nNAO HA ELEMENTOS a serem removidos";
    }

    // achar elemento para remoção

    No *noAux = lista->inicioLista;

    while(noAux != nullptr && inf > noAux->dado){
        noAux = noAux->prox;
    }
    if(noAux == nullptr || inf != noAux->dado){
        cout << "\n " << inf << " nao existe na lista";
    }else{
        // elemento presente na lista

        if(noAux == lista->inicioLista){ // remoção no INÍCIO da lista
            lista->inicioLista = noAux->prox;
            noAux->prox->ant = noAux->ant;
            delete noAux;
        }else{
            noAux->ant->prox = noAux->prox; //  <- / ->(prox) |20| aponta para ->(noAux->prox)|30|     |10|<=> |20| <=> |30|
            noAux->prox->ant = noAux->ant; //   -> / <-(ant) |20| aponta para -> (noAux->ant) |10|
            delete noAux;
        }

        lista->qtd--;
    }

}

void consultarElemento(Lista *lista, int inf){
    if(listaVazia(lista)==0){
        cout << "\nSEM elementos";
    }

    No *noAux = lista->inicioLista;
     while(noAux != nullptr && inf > noAux->dado){
        noAux = noAux->prox;
    }
     if(noAux == nullptr || inf != noAux->dado){
        cout << "\n Nao existe na lista";
    }
        cout << "\n " << noAux->dado << " encontrado";

}

void exibirElementosListaDupla(Lista *lista){
    if(listaVazia(lista) != 0){
        No *noAux = lista->inicioLista;

        while(noAux != nullptr){
            cout << noAux->dado << " -> ";
            noAux = noAux->prox;
        }
    }
}

void exibirQuantidadeElementosPares(Lista *lista){
    if(listaVazia(lista)!=0){
        No *noAux = lista->inicioLista;
        int par;
        while(noAux != nullptr){
            if(noAux->dado % 2 == 0){
                par++;

            }
            noAux = noAux->prox;
        }

        cout << "\nTem " << par << " numeros pares";
    }else{
        cout << "\nListar Vazia!!!";
    }
}
