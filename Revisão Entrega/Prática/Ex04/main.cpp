#include <iostream>

using namespace std;

int main()
{

    int qtd, par =0, impar=0;

    cout << "Insira o tamanho do vetor: ";
    cin >> qtd;

    int *vet = new (std::nothrow) int[qtd];

    if(!vet){
        cout << "Memória insuficiente" << endl;
    }else{
        for(int i = 0; i < qtd; i++){
            cout << "Insira um valor: ";
            cin >> vet[i];
        }
    }

    for(int i = 0; i < qtd; i++){
        if(vet[i] % 2 == 0){
            par += 1;
        }else{
            impar += 1;
        }
    }

    //MOSTRAR vetor
    for(int i =0; i < qtd; i++){
        cout << vet[i] << " - ";
    }
    cout << endl << endl;
    cout << "Quantidade de numeros PARES: " << par << endl;
    cout << "Quantidade de numeros IMPARES: " << impar << endl;

    delete[] vet;
    return 0;
}
