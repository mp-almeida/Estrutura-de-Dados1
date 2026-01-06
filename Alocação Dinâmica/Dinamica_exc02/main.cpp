#include <iostream>

using namespace std;

void preencherVet(int *ptrVet1, int *ptrVet2, int n){
    if((!ptrVet1) && (!ptrVet2))
        cout << "Memória insuficiente!!" << endl;
    else{
            for(int i = 0 ; i < n; i++){
                do{
                    cout << endl;
                    cout << "Insira valor (0 a 10) para o Vetor1: ";
                    cin >> ptrVet1[i];
                }while((ptrVet1[i] < 0) || (ptrVet1[i] > 10));
            }
            cout << endl;
            for(int i=0; i < n; i++){
                do{
                    cout << endl;
                    cout << "Insira valor (0 a 10) para o Vetor2: ";
                    cin >> ptrVet2[i];
                }while((ptrVet2[i] < 0) || (ptrVet2[i]> 10));
            }
    }
}

void somarVet(int *ptrVet1, int *ptrVet2, int n, int *somar){
    //soma dos vetores
    for(int i=0; i < n; i++){
        somar[i] = ptrVet1[i] + ptrVet2[i];
    }
}
void exibirResu(int n, int *somar){
    cout << "\nO valor da soma dos 2 vetores é: " << endl;
    for(int i=0; i < n; i++){
       cout << somar[i] << "-";
    }
}

int main()
{
    int tam;

    cout << "Insira o tamanho dos vetores: ";
    cin >> tam;

    cout << endl << endl;

    int *vetor;
    int *vetor2;
    int *soma;

    vetor = new (std::nothrow) int[tam];
    vetor2 = new (std::nothrow) int[tam];
    soma = new (std::nothrow) int[tam];

    preencherVet(vetor, vetor2, tam);
    somarVet (vetor, vetor2, tam, soma);
    exibirResu(tam, soma);

    delete [] vetor;
    delete [] vetor2;
    delete [] soma;

    return 0;
}

