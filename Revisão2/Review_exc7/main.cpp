#include <iostream>

using namespace std;

struct Circulo{
    float raio;
    float diametro;
    float area;
};

void raio (Circulo *cir, int qtd){
    for(int i = 0; i < qtd; i++){
        cout<< "Insira o raio (cm) " << i+1 << ": ";
        cin >> cir[i].raio;
        cout << endl;
    }
}

void diametro(Circulo *cir, int qtd){
    for(int i=0; i < qtd; i++){
        cir[i].diametro= 2*cir[i].raio;
    }
}

void area (Circulo *cir, int qtd){
    for(int i = 0; i < qtd; i++){
        cir[i].area = 3.14*(cir[i].raio*cir[i].raio);
    }
}

void exibir (Circulo *cir, int qtd){
    for(int i =0; i < qtd; i++){
        cout << endl;
        cout << "Circulo " << i+1 << endl;
        cout << "Raio: " << cir[i].raio << " cm " <<endl;
        cout << "Diametro: " << cir[i].diametro << " cm "<< endl;
        cout << "Area: " << cir[i].area << " cm quadrados" << endl;
    }
}

int main()
{
    int qtd = 10;
    Circulo *cir;
    cir = new (std::nothrow) Circulo[qtd];

    if(!cir){
        cout << "MEMORIA INSUFICIENTE" << endl;
    }else{
        raio(cir, qtd);
        diametro(cir, qtd);
        area(cir, qtd);
        exibir(cir, qtd);
    }


    delete[] cir;
    return 0;
}
