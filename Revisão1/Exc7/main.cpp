#include <iostream>

using namespace std;
int soma (int n1, int n2){
    return n1 + n2;
}
int multiplicacao(int n1, int n2, int n3){
    return n1*n2*n3;
}
float divisao (int n1, int n2){
    return n1/n2;
}
int main()
{
    char opc;
    int num1,num2,num3;

    do{
        cout << "A - somar dois numeros " << endl;
        cout << "B – multiplicar 3 numeros" << endl;
        cout << "C – dividir 2 numeros" << endl;
        cout << "S – SAIR" << endl;
        cout << "Escolha uma das opções: " << endl;
        cin >> opc;
        if(opc == 'A'){
            cout << "Numero 1: ";
            cin >> num1;
            cout << "Numero 2: ";
            cin >> num2;
            cout << "Soma: " << soma(num1, num2);
        }else if(opc == 'B'){
            cout << "Numero 1: ";
            cin >> num1;
            cout << "Numero 2: ";
            cin >> num2;
            cout << "Numero 3: ";
            cin >> num3;
            cout << "Multiplicacao: " << multiplicacao(num1,num2,num3);
        }else if(opc == 'C'){
            cout << "Numero 1: ";
            cin >> num1;
            cout << "Numero 2: ";
            cin >> num2;
            cout << "Divisao: " << divisao(num1,num2);
        }

    }while (opc == 'S');
    return 0;
}
