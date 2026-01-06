#include <iostream>



////4.Utilize vetor e alocação dinâmica. Receba 10 números e
//os armazene em um vetor alocado dinamicamente. Exiba as
//informações e também exiba os números contidos no vetor
//que são maiores que 13

using namespace std;

int main()
{
    int *vetor, qtd = 10;

    vetor = new (std::nothrow) int[qtd];
    if(!vetor){
        cout << "Memoria insuficiente!!!!" << endl;
    }else{
        for(int i = 0; i < qtd; i++){
            cout << "Informe o valor: ";
            cin >> vetor[i];
        }

    }

    // exibir vetor
    cout << "\nVETOR" << endl;
    for(int i=0; i<qtd;i++){
        cout << vetor[i] << " - ";
    }
    cout << endl << endl;

    cout << "\nMaior que 13" << endl;
    for(int i=0; i<qtd; i++){
        if(vetor[i] >= 13){
            cout << vetor[i] << " - ";
        }
    }

    delete[] vetor;

    return 0;
}
