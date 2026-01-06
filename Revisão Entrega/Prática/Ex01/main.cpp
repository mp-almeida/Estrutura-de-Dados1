#include <iostream>

using namespace std;
//Escreva um programa em C++ que declare uma variável inteira i e um ponteiro ptr para i.
//Altere o valor de i utilizando o ponteiro e exiba o valor de i em diferentes etapas.
//Após pegar o valor de i através do usuário. Após a manipulação através de ptr.


int main()
{
    int i, *ptri;

    cout << "Digite o valor de i: ";
    cin >> i;

    cout << "Valor de i: " << i;

    ptri = &i;
    *ptri = i + 10;
    cout << "\nValor de i depois da manipulacao através do po: " << i;


    return 0;
}
