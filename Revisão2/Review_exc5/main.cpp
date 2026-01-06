#include <iostream>

using namespace std;
// 5 - Utilize vetor alocado dinamicamente, função.
//Crie um procedimento para preencher 6 valores
//e armazená-los em um vetor. Exiba as informações
//e também a quantidade de valores
//armazenados que são negativos (elabore outro
// procedimento para exibir).


void preencher(int *vetor, int qtd){
    for(int i = 0; i<qtd; i++){
        cout << "Insira um valor: ";
        cin >> vetor[i];
    }
}

void exibir(int *vetor, int qtd){
    cout << "\nVETOR " << endl;
    for(int i =0; i < qtd; i++){
        cout << vetor[i] << " / ";
    }
}

void exibirNegativo(int *vetor, int qtd){
    int qtdNeg = 0;
    cout << endl;
    cout << "\nValores negativos do vetor " << endl;
    for(int i = 0; i < qtd; i++){
        if(vetor[i] < 0){
            qtdNeg += 1;
            cout << vetor[i] << " / ";
        }
    }
    cout << endl;
    cout << "\nQuantidade de numeros negativos: " << qtdNeg;
}

int main()
{
    int *vetor, qtd = 6;

    vetor = new (std::nothrow) int[qtd];

    preencher(vetor, qtd);
    exibir(vetor, qtd);
    exibirNegativo(vetor, qtd);



    return 0;
}
