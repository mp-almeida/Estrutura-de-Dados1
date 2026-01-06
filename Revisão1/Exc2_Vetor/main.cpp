#include <iostream>

using namespace std;

int main()
{
    int vetor[10];
    int inverso[10];

    for(int i = 0; i < 10; i++){
        cout << "Informe um número positivo: ";
        cin >> vetor[i];
        cout << endl;
    }

    cout << "Normal" << endl;
    for(int i = 0; i < 10; i++){
        cout << vetor[i] << " - ";
    }

    cout << endl;
    cout << "Inverso" << endl;
    for(int i = 0; i < 10; i++){
        inverso[i] = vetor[9-i];
        cout << inverso[i] << " - ";
    }
}
