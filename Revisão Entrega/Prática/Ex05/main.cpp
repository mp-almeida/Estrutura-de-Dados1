#include <iostream>

using namespace std;

void trocaValor(int *ptra, int *ptrb){
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

}

void trocaCopia(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n1 = 13;
    int n2 = 2014;

    cout << "ANTES DA TROCA" << endl;
    cout << "N1: " << n1 << endl;
    cout << "N2: " << n2 << endl;

    trocaValor(&n1, &n2);
    cout << "\nTROCA PONTEIRO" << endl;
    cout << "N1: " << n1 << endl;
    cout << "N2: " << n2 << endl;

    cout<< endl;
    n1 = 13;
    n2 = 2014;
    trocaCopia(n1, n2);
    cout << "\nTROCA POR COPIA" << endl;
    cout << "N1: " << n1 << endl;
    cout << "N2: " << n2 << endl;
    return 0;
}
