#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    struct CadastrarAnimal{
        char nome[30];
        char raca[30];
        int idade;
        char dono[30];
        int tel;
    } strCadAnimal[5];
    int maioridade = 0;
    string maiornome;
    string maiordono;

    for(int i =0; i < 5; i++){
    cout << "Informe o nome: " << endl;
    cin.getline(strCadAnimal[i].nome, 30);
    fflush(stdin);

    cout << "Informe a raca: " << endl;
    cin.getline(strCadAnimal[i].raca, 30);
    fflush(stdin);


    cout << "Informe o idade: " << endl;
    cin >> strCadAnimal[i].idade;
    fflush(stdin);

    cout << "Informe o nome do dono: " << endl;
    cin.getline(strCadAnimal[i].dono, 30);
    fflush(stdin);

    cout << "Informe o telefone: " << endl;
    cin >> strCadAnimal[i].tel;
    fflush(stdin);

    }

    cout << endl << endl;
    for(int i =0; i < 5; i++){
    cout << "Nome: " << strCadAnimal[i].nome << endl;
    cout << "Raca: " << strCadAnimal[i].raca << endl;
    cout << "Idade: " << strCadAnimal[i].idade << endl;
    cout << "Nome do dono: " << strCadAnimal[i].dono << endl;
    cout << endl << endl;
    }
    cout << endl;
    for(int i =0; i < 5; i++){
         if(maioridade < strCadAnimal[i].idade){
            maioridade = strCadAnimal[i].idade;
            maiornome = strCadAnimal[i].nome;
            maiordono = strCadAnimal[i].dono;
    }
    cout << "Pet mais velho" << endl;
    cout << "Nome: " << maiornome << endl;
    cout << "Nome do dono: " << maiordono << endl;


    return 0;
}}
