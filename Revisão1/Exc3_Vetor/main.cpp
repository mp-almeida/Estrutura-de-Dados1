#include <iostream>

using namespace std;

int main()
{
    int vetor[7], soma;
    int qntd = 0;

    for(int i = 0; i < 7; i++){
        cout << "Informe um número positivo: ";
        cin >> vetor[i];
        cout << endl;
    }

    for(int i = 0; i < 7; i++){
        if(vetor[i] % 8 == 0){
            qntd = qntd + 1;
        }
        soma += vetor[i];

    }

    cout << "Soma do vetor: " << soma << endl;
    cout << "Quantidade de num. divisivel por 8: " << qntd << endl;

}
