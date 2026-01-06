#include <iostream>

using namespace std;

int main()
{
    float n1, n2, media;
    float *ptr2, *ptrmedia;

    do{
        cout << "Insira nota 1: ";
        cin >> n1;
        cout << "Insira nota 2: ";
        cin >> n2;
    }while((n1<0.0) || (n1>100.0) || (n2 < 0.0) || (n2 > 100.0));

    ptr2 = &n2;
    *ptr2 = n2;

    media = (n1 + *ptr2)/2;

    ptrmedia = &media;

    cout << "Valor da media: " << *ptrmedia;


    return 0;
}
