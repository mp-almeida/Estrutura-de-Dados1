#include <iostream>

using namespace std;

struct Produto{
    int cod;
    float preco;
    char categoria;
};

void preencher(Produto *vet, int tam){
    for(int i =0; i < tam; i++){
        do{
            cout << "Insira o codigo: ";
            cin >> vet[i].cod;
            cout << "Insira o preco: ";
            cin >> vet[i].preco;
            cout << "Insira a categoria (A ou B): ";
            cin >> vet[i].categoria;
            cin.ignore();
            cout << endl;
        }while((vet[i].categoria != 'A') && (vet[i].categoria != 'B'));
    }
}

void exibir(Produto *vet, int tam){
    for(int i =0; i < tam; i++){
        cout << "Codigo: "<< vet[i].cod << endl;
        cout << "Preco: " << vet[i].preco << endl;
        cout << "Categoria: " << vet[i].categoria << endl;
        cout << endl;
    }
}

void menorPreco(Produto *vet, int tam){
    int indiceMenor = 0;
    for(int i =0; i < tam; i++){
        if(vet[i].preco < vet[indiceMenor].preco){
            indiceMenor = i;
        }
    }

    cout << endl;
    cout << "PRODUTO C/ VALOR MAIS BAIXO" << endl;
    cout << "Codigo: " << vet[indiceMenor].cod << endl;
    cout << "Categoria: " << vet[indiceMenor].categoria << endl;

}
int main()
{
    int tam = 2;

    Produto *vet = new Produto[tam];

    preencher(vet, tam);
    exibir(vet, tam);
    menorPreco(vet, tam);

    delete[] vet;

    return 0;
}
