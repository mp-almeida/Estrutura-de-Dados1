#include <iostream>

using namespace std;

void armazenar(float *vetor, int qtd){
    for(int i = 0; i<qtd; i++){
        do{
            cout << "Insira o valor: ";
            cin >> vetor[i];
        }while((vetor[i] < 0) || (vetor[i] > 10));
    }
}

void exibir(float *vetor, int qtd){
    cout << endl;
    for(int i = 0; i<qtd; i++){
        cout << vetor[i] << " - ";
    }

}

int main()
{
    float *vetor, qtd = 15;

        armazenar(vetor, qtd);
        exibir(vetor, qtd);

    return 0;
}
