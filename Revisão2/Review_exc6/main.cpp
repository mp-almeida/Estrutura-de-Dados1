#include <iostream>

using namespace std;

struct Circulo{
    float raio;
    float circunf;
    float area;
};
int main()
{
    Circulo *cir;

    cir = new (std::nothrow) Circulo[10];

    if(!cir){
        cout << "MEMORIA INSUFICIENTE" << endl;
    }else{
        for(int i=0; i<10; i++){
            cout << "Circulo " << i+1 << endl;
            cout << "Insira o raio (cm): ";
            cin >> cir[i].raio;
            cout << endl;

            cir[i].circunf = 2*3.14*cir[i].raio;
            cir[i].area = 3.14*(cir[i].raio*cir[i].raio);

            cout << "Circunferencia: " << cir[i].circunf << "cm "<< endl;
            cout << "Area: " << cir[i].area << " cm quadrados"<< endl;
            cout << endl;
        }
    }


    delete[] cir;
    return 0;
}
