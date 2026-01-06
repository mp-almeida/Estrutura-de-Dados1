#ifndef LISTADUPLAMENTEENCADEADA_H_INCLUDED
#define LISTADUPLAMENTEENCADEADA_H_INCLUDED

struct No{
    int dado;
    No *prox, *ant;
};

struct Lista{
    No *inicioLista;
    int qtd;
};

Lista* criarLista();
int listaVazia(Lista *lista);
void inserirElemento(Lista *lista, int dado);
void removerElemento(Lista *lista, int dado);
void consultarElemento(Lista *lista, int dado);
void exibirElementosListaDupla(Lista *lista);
void exibirQuantidadeElementosPares(Lista *lista);
#endif // LISTADUPLAMENTEENCADEADA_H_INCLUDED
