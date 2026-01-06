#ifndef PILHAESTATICA2_H_INCLUDED
#define PILHAESTATICA2_H_INCLUDED
#include <cstring>
#include <iostream>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

struct Pilha{
    Pessoa pessoa[5];
    int topo;
};

void criarPilha(Pilha *pilha);
void inserirPilha(Pilha *pilha);
void exibirElemento(Pilha *pilha);
void removerElemento(Pilha *pilha);

#endif // PILHAESTATICA2_H_INCLUDED
