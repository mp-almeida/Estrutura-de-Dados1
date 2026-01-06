#include <iostream>

using namespace std;

int armazenarInfo (int *ptrVetor){
    for(int i = 0; i < 10; i++){
        cout << "Insira um valor: ";
        cin >> ptrVetor[i];
//        cin >> *ptrVetor;
//        ptrVetor++;
    }
//
}



void exibirInfo(int *ptrVetor){
    cout << endl;
    for(int i = 0; i < 10; i++){
        cout << ptrVetor[i] << " - ";
    }
}
int main(){
    int vetor[10];
    armazenarInfo(&vetor[0]);
    exibirInfo(&vetor[0]);


    return 0;
}
