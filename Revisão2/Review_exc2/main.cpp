#include <iostream>

using namespace std;

void armazenar(int *ptrvet){
    for(int i =0; i < 15; i++){
        cout << "Insira um valor: ";
        cin >> ptrvet[i];
    }
}

void exibir(int *ptrVet){
    cout << "\nO vetor criado: " << endl;
    for(int i =0; i < 15; i++){
        cout << ptrVet[i] << " - ";
    }
}

void calculasoma(int *ptrVET, int *soma){
    for(int i = 0; i < 15; i++){
        *soma += ptrVET[i];
    }

}
int main()
{
    int vet[15], soma = 0;

    armazenar(vet);
    exibir(vet);
    calculasoma(vet, &soma);

    cout << "\nResultado da soma: " << soma;


    return 0;
}
