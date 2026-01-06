#include <iostream>

using namespace std;

void preencherVetor(int *vetor, int tam){
    for(int i=0; i < tam; i++){
        cout << "Insira o valor ["<<i<<"]: ";
        cin >> vetor[i];
    }
}

void exibeVetor(int *vetor, int tam){
    cout << endl;
    for(int i=0; i < tam; i++){
        cout << vetor[i] << " / ";
    }
}

void CalculaTotalPar(int *vetor, int tam, int *ptr){
    *ptr = 0;
    for(int i=0; i < tam; i++){
        if(vetor[i] % 2 == 0){
            *ptr += 1;
        }
    }
}
int main()
{
    int tam;
    int total;

    cout << "Insira o tamanho do vetor: ";
    cin >> tam;

    int *vetor;

    vetor = new int[tam];

    preencherVetor(vetor, tam);
    exibeVetor(vetor, tam);
    CalculaTotalPar(vetor, tam, &total);

    cout << endl;
    cout << "\nQuantidade total de numeros pares digitados: " << total;

    delete[] vetor;
    return 0;
}
