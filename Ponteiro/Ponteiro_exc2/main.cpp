#include <iostream>

using namespace std;

//Programa que recebe dois números calcula a soma e exibe o resultado.
//Utilize ponteiro para manipular pelo menos uma das variáveis e exiba
// o valor através do ponteiro.
int main()
{
    int n1, n2, soma, *ptr1, *ptr2;

    cout << "Informe um numero:";
    cin >> n1;
    cout << "Informe um numero:";
    cin >> n2;

    ptr1 = &n1;
    *ptr1 = n1;

    soma = *ptr1 + n2;

    ptr2 = &soma;

    cout << "\nO valor da soma dos valores: " << *ptr2 << endl;
    return 0;
}
