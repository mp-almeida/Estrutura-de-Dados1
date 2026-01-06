#include <iostream>

using namespace std;
//Dado o seguinte trecho de código, complete-o e exiba o valor
//e o endereço das variáveis x e y (diretamente e via ponteiro),
//e o valor e endereço dos ponteiros ptr1 e ptr2. O objetivo é
//verificar a saída para os valores de y:
//
//int x=3, y=9, *ptrx, *ptry;
//
//ptrx = &x;
//
//ptry = nullptr;
//
//// ... complete o código para exibir os valores e endereços de x,y, prtx, ptry.
//
//ptry=&y;
//
//*ptry=5;
//
//       // ... exiba os valores e endereços novamente
int main()
{
    int x=3, y=9, *ptrx, *ptry;

    ptrx = &x;

    ptry = nullptr; // não aponta para valor válido


// ... complete o código para exibir os valores e endereços de x,y, prtx, ptry.
    cout << "Valor de X: " << x << endl;
    cout << "Valor de y: " << y << endl;
    cout << "Valor de x (ponteiro): " << *ptrx << endl;
    cout << "Valor de y (ponteiro): " << *ptry << endl;

    ptry = &y;
    *ptry = 5;

    cout << "Valor do ponteiro X: " << *ptrx << endl;
    cout << "Valor do ponteiro Y: " << *ptry << endl;
    cout << "Valor do endereço do ponteiro X: " << &ptrx << endl;
    cout << "Valor do endereço do ponteiro y: " << &ptry << endl;
    return 0;
}
