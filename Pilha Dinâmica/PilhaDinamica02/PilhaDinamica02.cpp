#include <iostream>
#include "PilhaDinamica02.h"
using namespace std;


Pilha* criarPilha(){
    Pilha *topo = new (std::nothrow) Pilha;

    if(topo == nullptr){
        cout << "Erro da alocacao de memoria";
        //exit();
    }

    cout << "Pilha CRIADA\n";
    *topo= nullptr; // a pilha passa a existir - pois o topo = 0 (não há elementos)
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

void inserirPilha(Pilha *topo, Funcionario *func){
    No *novoNo = new (std::nothrow) No;

    if(novoNo == nullptr){
        cout << "Nao e possivel alocar memoria! Struct ja preenchida!\n";

    }else{
        novoNo->dados=*func;
        novoNo->prox=nullptr;

        novoNo->prox = *topo;
        *topo=novoNo;
        cout<< "Insercao realizada com sucesso!!\n";

        /*if(*topo == nullptr){ //se a pilha estiver vazia, o topo aponta para o novo elemento
            *topo = novoNo;
        }else{//se a pilha estiver vazia, o topo vai apontar
            novoNo->prox = *topo; // a nova pilha(elemento) aponta para a pilha anterio para
            *topo= novoNo; // obter o topo

            // prox sempre aponta para a próxima pilha
        }*/
    }
}

void exibirElemento(Pilha *topo){
    int x;
    x = pilhaVazia(topo);
    if(x != 0){//pilha não está vazia
        No *noAux = *topo;

        cout << "Nome: " << noAux->dados.nome << "\n";
        cout << "Cargo: " << noAux->dados.cargo << "\n";
        cout << "Salario: " << noAux->dados.salario << "\n";
        cout << "\n";
    }else{
        cout << "Pilha esta VAZIA\n";
    }
}

void removerElemento(Pilha *topo){
    int x;
    x = pilhaVazia(topo);
    if( x != 0){
        No *noAux = *topo; // cria um ponteiro noAux que aponta para onde o TOPO aponto
        *topo = noAux->prox; //topo aponta para o valor anterior
        delete noAux; // deleta o topo

        cout << "Elemento REMOVIDO\n";
    }else{
        cout << "Nao tem elementos na pilha!!\n";
    }
}
void cadastrarElemento(Funcionario *fun){
    cout << "Cadastro Funcionario\n";
    cout << "Nome: ";
    fflush(stdin);
    cin.getline(fun->nome, sizeof(fun->nome));
    cout << "Cargo: ";
    cin >> fun->cargo;
    cout << "Salario: ";
    cin >> fun->salario;
    cout << "\n";
}


