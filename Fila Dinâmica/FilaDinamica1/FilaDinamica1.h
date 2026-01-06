#ifndef FILADINAMICA1_H_INCLUDED
#define FILADINAMICA1_H_INCLUDED

struct No{
    int dados; // NÃO É VETOR - pois é inserido um de cada vez
    No *prox;
};

struct Fila {
    No *inicio;
    No *fim;
};


Fila* criarFila();
int filaVazia(Fila *fila);
int inserirElemento(Fila *fila);
void removerElemento(Fila *fila);
void exibirElemento(Fila *fila, int x);
void exibirFila(Fila *fila);
void deletarFila(Fila *fila);


#endif // FILADINAMICA1_H_INCLUDED
