#include <iostream>

// FAZER UMA DIVISÃO POR 2 NÚMEROS INFORMADOS PELO USUÁRIO
// SE A DIVISÃO FOR INVÁLIDA O PROGRAMA DEVE CONTINUAR  A DIVISÃO
//
using namespace std;

int main()
{
    int num, divisor;

    float result;

    do{
        cout << "Informe o numero a ser dividido: ";
        cin >> num;
        cout << endl;
        cout << "Informe o divisor: ";
        cin >> divisor;
    }while(divisor < 0);

    result = num / divisor;

    cout << endl;

    cout << "O resultado da divisão é: " << result;


    return 0;
}
