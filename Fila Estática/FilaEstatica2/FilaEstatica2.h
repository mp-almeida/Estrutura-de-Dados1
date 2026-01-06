#ifndef FILAESTATICA2_H_INCLUDED
#define FILAESTATICA2_H_INCLUDED

#define MAX 5

struct FILA{
    int dados[MAX];
    int qtd, inicio, fim;
};

void criarFila(FILA *fila);
void inserirElemento(FILA *fila);
void exibirElementoPrimeiro(FILA *fila);
void exibirElementoUltimo(FILA *fila);
void removerElemento(FILA *fila);
void exibirInverso(FILA *fila);
void exibirMaiorZero(FILA *fila);

#endif // FILAESTATICA2_H_INCLUDED
