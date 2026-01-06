#ifndef FILAESTATICA_H_INCLUDED
#define FILAESTATICA_H_INCLUDED

#define MAX 5

struct FILA{
    int dados[MAX]; // vetor
    int qtd, inicio, fim;
};

void criarFila(FILA *fila);
void inserirElemento(FILA *fila);
void exibirElementoPrimeiro(FILA *fila);
void exibirElementoUltimo(FILA *fila);
void removerElemento(FILA *fila);
void exibirFila(FILA *fila);

#endif // FILAESTATICA_H_INCLUDED
