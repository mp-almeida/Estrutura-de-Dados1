#include <iostream>

using namespace std;

int main()
{
    int x=2, y=10, *ptr1, *ptr2;
    char letra = 'T', *ptrLetra;
    ptr1 = &x;
    ptr2 = nullptr;
    cout <<"Valor de ptr: "<< ptr1;
    cout <<"\nValor de x de forma indireta: "<< *ptr1 ;
    cout <<"\nEndereço de ptr1 :” << " << &ptr1;
    cout <<"\nValor de x: "<< x ;
    cout <<"\nEndereço de x: "<< ptr1 << endl << endl;
    ptr2=&y;
    *ptr2=5;

    cout <<"Valor de ptr2: "<< ptr2;
    cout <<"\nValor de y de forma indireta: "<< *ptr2 ;
    cout <<"\nEndereço de ptr2 :" << &ptr2;
    cout <<"\nValor de y: "<< y ;
    cout <<"\nEndereço de y: " << ptr2;

    ptrLetra =&letra;
    *ptrLetra = 'M';
    cout << "\n-----------------------" << endl;
    cout <<"Valor de ptrLetra: "<< ptrLetra;
    cout <<"\nValor de y de forma indireta: "<< *ptrLetra ;
    cout <<"\nEndereço de ptr2 :" << &ptrLetra;
    cout <<"\nValor de letra: "<< letra ;
    cout <<"\nEndereço de letra: " << &letra;

    return 0;
}
