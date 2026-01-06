#include "FilaEstatica2.h"
#include <iostream>

using namespace std;

    void criarFila (FILA *fila){
        //INICIAR PARÂMETROS

        fila->qtd = 0;
        fila->inicio = 0;
        fila->fim = -1;
    }

    int filaVazia(FILA *fila){
        if(fila->qtd == 0){
            cout << "FILA ESTÁ VAZIA\n";
            return 0;
        }
        return 1;
    }

    int filaCheia(FILA *fila){
        if(fila->qtd == MAX){
            cout << "FILA ESTÁ CHEIA\n";
            return 0;
        }
        return 1;
    }

    void inserirElemento(FILA *fila){
        int x;
        x = filaCheia(fila);

        if(x == 1){
            fila->fim++;
            if(fila->fim == MAX){
                fila->fim = 0;
            }
               cout << "Informe um dado: ";
                cin >> fila->dados[fila->fim];
                fila->qtd++;
            }
        else{
            cout << "NÃO FOI POSSÍVEL A INSERÇÃO!!\n";
        }
    }

    void removerElemento(FILA *fila){
        int x;
        x = filaVazia(fila);

        if(x == 1){
                cout << "Elemento removido: " << fila->dados[fila->inicio] << "!!\n";
            fila->inicio++;
            fila->qtd--;
            if(fila->inicio == MAX){
                fila->inicio = 0;

                if(fila->qtd == 0){ // REPOSICIONAR OS PONTEIROS INIC E FIM QUANDO NÃO HOUVER MAIS VALORES
                    fila->inicio =  0;
                    fila->fim = -1;
                }
            }
        }else{
            cout << "NÃO FOI POSSÍVEL A REMOÇÃO!!\n";
        }
    }

    void exibirElementoPrimeiro(FILA *fila){
         int x;
        x = filaVazia(fila);
        if(x==1){
            cout << "O primeiro elemento da fila é " << fila->dados[fila->inicio];
        }
    }

      void exibirElementoUltimo(FILA *fila){
        int x;
        x = filaVazia(fila);
        if(x==1){
            cout << "O ultimo elemento da fila é " << fila->dados[fila->fim];
        }
    }

    void exibirInverso(FILA *fila){
        int x;
        x = filaVazia(fila);
        if(x == 1){
            for(int i = 0, j=fila->fim; i < fila->qtd; i++){
                if(j == MAX)
                    j=0;
                    cout << fila->dados[j] << " / ";
                    j--;
            }
        }
    }

    void exibirMaiorZero(FILA *fila){
        bool tem = false;
        int x;
        x = filaVazia(fila);
        if(x==1){
            for(int i = 0, j=fila->inicio; i < fila->qtd; i++){
                if(j == MAX)// passou do tamanho
                    j=0; //volta para o início
                    if(fila->dados[j] >= 0){
                    cout << fila->dados[j] << " / ";
                    tem = true;
                    }
                    j++;
            }
            if(tem == false){
                cout << "\nNão há números maiores que 0\n";
            }

        }
    }
