#ifndef PILHADINAMICA02_H_INCLUDED
#define PILHADINAMICA02_H_INCLUDED

struct FUNCIONARIO{
    char nome[30];
    char cargo[30];
    double salario;
};
typedef struct FUNCIONARIO Funcionario;

struct PILHA{
    struct PILHA *prox; //criou um ponteiro do tipo PILHA
    FUNCIONARIO dados;
};

typedef struct PILHA *Pilha;
typedef struct PILHA No; // CRIAR e REMOVER

Pilha* criarPilha();
void liberarPilha(Pilha *topo);
int pilhaVazia(Pilha *topo);
void inserirPilha(Pilha *topo, Funcionario *func);
void exibirElemento(Pilha *topo);
void removerElemento(Pilha *topo);
void cadastrarElemento(Funcionario *func);


#endif // PILHADINAMICA02_H_INCLUDED
