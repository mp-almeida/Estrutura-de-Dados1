#include <iostream>

using namespace std;

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

    if((!vetor) && (!vetor2))
        cout << "Memória insuficiente!!" << endl;
    else{
            for(int i = 0 ; i < tam; i++){
                do{
                    cout << endl;
                    cout << "Insira valor (0 a 10) para o Vetor1:";
                    cin >> vetor[i];
                }while ((vetor[i] < 0) || (vetor[i]> 10));
            }
            cout << endl;
            for(int i=0; i < tam; i++){
                do{
                    cout << endl;
                    cout << "Insira valor (0 a 10) para o Vetor2:";
                    cin >> vetor2[i];
                }while((vetor2[i] < 0) || (vetor2[i]> 10));
            }
    }


    //soma dos vetores
    for(int i=0; i < tam; i++){
        soma[i] = vetor[i] + vetor2[i];
    }

    cout << "\nO valor da soma dos 2 vetores é: " << endl;
    for(int i=0; i < tam; i++){
       cout << soma[i] << "-";
    }
    delete [] vetor;
    delete [] vetor2;
    delete [] soma;

    return 0;
}


