#include <iostream>

using namespace std;

int main()
{
    int tam;
    int *vet1, *vet2, *vet3;

    cout << "Insira o tamanho: ";
    cin >> tam;

    vet1 = new (std::nothrow) int[tam];
    vet2 = new (std::nothrow) int[tam];
    vet3 = new (std::nothrow) int[tam];

    cout << "VETOR 1" << endl;
    for(int i=0; i<tam; i++){
        do{
            cout << "Insira o valor (-10 a 0): ";
            cin >> vet1[i];

        }while((vet1[i]< -10) || (vet1 < 0));
    }

    cout << "VETOR 2" << endl;
    for(int i=0; i<tam; i++){
        do{
            cout << "Insira o valor (-10 a 0): ";
            cin >> vet2[i];

        }while((vet2[i]< -10) || (vet2 < 0));
    }

    for(int i=0; i<tam; i++){
        vet3[i] = vet1[i]*vet2[i];
    }
    cout << endl << endl;
    cout << " VETOR 1" << endl;
    for(int i=0; i<tam; i++){
        cout << vet1[i] << " / ";
    }

    cout << endl << endl;
    cout << " VETOR 1" << endl;
    for(int i=0; i<tam; i++){
        cout << vet2[i] << " / ";
    }
    cout << endl << endl;
    cout << " VETOR 3 - Muttiplicacao" << endl;
    for(int i=0; i<tam; i++){
        cout << vet3[i] << " / ";
    }

    delete[] vet1;
    delete[] vet2;
    delete[] vet3;
    return 0;
}
