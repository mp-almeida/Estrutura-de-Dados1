#include <iostream>

using namespace std;

void pegavalor (int *ptr){
    cout << "Informe o valor de x: ";
    cin >> *ptr;
}

void exibavalor (int *ptr){
    cout << *ptr;
}
int main()
{
    int x;

    pegavalor(&x);
    exibavalor(&x);
    return 0;
}
