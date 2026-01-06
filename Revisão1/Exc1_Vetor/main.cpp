#include <iostream>

using namespace std;

int main()
{
    int vetor[5];

    for(int i = 0; i < 5; i++){
        cout << "Informe um número positivo: ";
        cin >> vetor[i];
        cout << endl;
    }

    for(int i = 0; i < 5; i++){
        cout << vetor[i] << " - ";
    }


    return 0;
}
