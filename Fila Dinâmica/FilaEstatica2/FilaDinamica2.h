#ifndef FILADINAMICA2_H_INCLUDED
#define FILADINAMICA2_H_INCLUDED

struct No{
    int dados;
    No *prox;
};

struct Fila{
    No *fim;
    No *inicio;
};

Fila* criarFila();
int filaVazia(Fila *fila);
int inserirElemento(Fila *fila);
void removerElemento(Fila *fila);
void exibirElemento(Fila *fila, int x);
void exibirFila(Fila *fila);
void exibirInverso(Fila *fila);
void exibirQuantidade(Fila *fila);
void deletarFila(Fila *fila);
#endif // FILADINAMICA2_H_INCLUDED
