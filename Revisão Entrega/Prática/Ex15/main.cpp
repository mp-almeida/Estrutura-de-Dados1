#include <iostream>

using namespace std;

void preencher(int **matriz, int l, int c){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            do{
                cout << "Insira o valor [" << i << "][" << j << "] : ";
                cin >> matriz[i][j];
            }while (matriz[i][j]<=0);
        }
    }
}

void exibir (int **matriz, int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j<c; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void diagonal(int **matriz, int l, int c){
    for(int i =0; i < l; i++){
        for(int j=0; j<c;j++){
            if(i == j){
                cout << matriz[i][j] << "\t";
            }
        }
        cout << endl;
    }
}
int main()
{
    int **matriz, l= 2, c =3;

    //alocação dinâmica da MATRIZ
    matriz = new int*[l];
    for(int i=0; i<l; i++){
        matriz[i] = new int[c];
    }

    preencher(matriz, l, c);
    exibir(matriz, l, c);
    diagonal (matriz, l,c);

    for(int i=0; i <l; i++){
        delete[] matriz[i];
    }
    delete[] matriz;
    return 0;
}
