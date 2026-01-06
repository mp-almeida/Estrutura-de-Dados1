#ifndef PILHADINAMICA01_H_INCLUDED
#define PILHADINAMICA01_H_INCLUDED

struct PILHA{
    int valor; // dinâmico
    PILHA *prox; //criou um ponteiro do tipo PILHA
};

typedef struct PILHA *Pilha;
typedef struct PILHA No; // CRIAR e REMOVER

Pilha* criarPilha();
void liberarPilha(Pilha *topo); //
int pilhaVazia(Pilha *topo); //
void inserirElemento(Pilha *topo);
void exibirElemento(Pilha *topo);
void removerElemento(Pilha *topo);

#endif // PILHADINAMICA01_H_INCLUDED
