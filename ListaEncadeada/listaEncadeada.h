#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED


struct No{
    int info;
    NODE *prox;
};

struct Lista{
    NODE *inicioLista;
    int qtd;
};

 *Lista criarlista(Lista *lista);
  int listaVazia(Lista *lista);
  void inserirelemento(Lista *lista, int dado);
  void removerelemento (Lista *lista, int dado);
  void exibirelemento(Lista *lista);
  void consultarelemento(Lista *lista, int dado);
  void liberarlista (Lista *lista);


#endif // LISTAENCADEADA_H_INCLUDED
