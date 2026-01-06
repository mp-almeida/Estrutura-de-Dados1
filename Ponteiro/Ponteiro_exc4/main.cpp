#include <iostream>

using namespace std;
void somar(float *ptr1,float *ptr2,float *soma){
    *soma = *ptr1 + *ptr2;
}
int main()
{
    float n1, n2, soma;

    cout << "Insira o valor1: ";
    cin >> n1;
    cout << "Insira o valor2: ";
    cin >> n2;

    somar(&n1, &n2, &soma);

    cout << "Valor da soma: " << soma;
    return 0;
}


