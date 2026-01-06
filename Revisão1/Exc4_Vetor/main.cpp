#include <iostream>

using namespace std;

int main()
{
    int matriz[4][4], i, j;


    for( i = 0; i < 4; i++){
        for( j = 0; j < 4; j++){
            cout << "Insira numeros na posicao " << i << " / " << j << ": " ;
            cin >> matriz[i][j];
        }
    }

    for( i = 0; i < 4; i++){
        for( j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl << "Diagonal" << endl;

        for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                cout << matriz[i][j] << " - ";
            }
        }
        }

    cout << endl;
    cout << "Ultima linha" << endl;

        for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if((i == 3)){
                cout << matriz[i][j] << " - ";
            }
        }
        }
    return 0;
}

