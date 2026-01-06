#include <iostream>

using namespace std;

void somar(int *ptr1, int *ptr2, int *ptr_soma){
    *ptr_soma = (*ptr1 * 3) + (*ptr2 * 3);
}
int main()
{
    int a, b, soma;
    cout << "Insira valor1: ";
    cin >> a;
    cout << "Insira valor2: ";
    cin >> b;

    somar(&a, &b, &soma);

    cout << "Soma do triplo dos valores: " << soma;

    return 0;
}
