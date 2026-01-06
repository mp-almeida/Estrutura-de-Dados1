#include "listaEncadeada.h"
#include <iostream>

 using namespace std;

 *Lista criarlista(Lista *lista){
        Lista *lista = new (std::nothrow) Lista;

        if(lista == nullptr){
            cout << "\nNão houve espaço - MEMÓRIA CHEIA\n";
            exit();
        }
            cout << "\nMemória alocada!!!";
            lista->inicioLista = nullptr;
            lista->qtd = 0;

            return lista;
 }

 int listaVazia(Lista *lista){
    if(lista->qtd == 0){ // lista->inicioLista == nullptr
        cout << "\nLista está vazia\n";
        return 0;
    }else{
        return 1;
    }
 }


void inserirelemento(Lista *lista, int dado){
    No *novoNo = new (std::nothrow) No;

    if (novoNo == nullptr){
        cout << "\nERRO: MEMÓRIA CHEIA!!";
    }else{
        novoNo->prox=nullptr;
        novoNo->info=dado;

        if(listaVazia(lista)==0){ //lista estiver vazia o inicio que apontava para null - agora aponta para o novoNo
            lista->inicioLista = novoNo;

        }else{
            No *noAnt, *noAux = lista->inicioLista; // para começar as comparações de ordem crescente desde o início da lista

            //para encontrar o lugar do novoNo - para ficar na ordem
            while(noAux != nullptr && novoNo->info > noAux->info){
                noAnt = noAux;
                noAux = noAux->prox;
            }
            if(noAux==lista->inicioLista){//inserção de um elemento novo
                novoNo->prox=noAux; // aponta para o início

                lista->inicioLista = novoNo;  // necessário atualizar o inicio
            }else{// inserção no meio ou no final da lista
                noAnt->prox = novoNo;
                novoNo->prox = noAux;
            }

        }
        novoNo->qtd++;
        cout<< "\nElemento inserido com sucesso!!\n";
    }
}

void removerelemento (Lista *lista, int dado){
        if(listaVazia(lista)==0){ //lista estiver vazia o inicio que apontava para null - agora aponta para o novoNo
            cout << "\nNão é possível remoção";
        }else{
            No *noAnt,*noAux = lista->inicioLista;

            while(noAux != nullptr && novoNo->info > noAux->info){
                noAnt = noAux;
                noAux = noAux->prox;

            }
            if(noAux->info == dado && noAux == lista->inicioLista){ // remover PRIMEIRO elemento
                lista->inicioLista = noAux->prox;
                delete noAux;
                lista->qtd--;
            }
            else if(noAux->info==dado){//remover quando NÃO está no início
                noAnt->prox = noAux->prox;
                delete noAux;
                lista->qtd--;
            }
            else{
                cout << "\nElemento não está na lista";
            }

        }
}

void exibirelemento(Lista *lista){
    if(listaVazia(lista)!=0){
        No *noAux;
        noAux = lista->inicioLista;

        while(noAux != nullptr){
            cout << noAux->info << " -> ";

            noAux= noAux->prox; //andar na lista
        }
        cout << "nulo";
    }
}

void consultarelemento(Lista *lista, int dado){
    if(listaVazia(lista)!=0){
        No *noAux;
        noAux = lista->inicioLista;

        while(noAux != nullptr && noAux->info < dado){
            noAux= noAux->prox; //andar na lista
        }
        if(dado == noAux->info){
            cout << "\nDado encontrado! ";
        }else{
            cout << "\nElemento nao esta presente na lista!";
        }
    }
}

void liberarlista (Lista *lista){
    No *noAux = lista->inicioLista;

    while (noAux != nullptr){
        lista->inicioLista = noAux->prox;
        delete noAux;
        noAux= lista->inicioLista;
    }
    delete lista;
}



