#include <iostream>
#include <cstring>
using namespace std;


    struct Animal {
    string nome;
    string especie;
    string raca;
    int idade;
    };

void cadastrarAnimal (Animal *cadAnimal){
    cout << "Nome: ";
    getline(cin,cadAnimal->nome);
    cout << "Especie: ";
    getline(cin, cadAnimal->especie);
    cout << "Raca: ";
    getline(cin, cadAnimal->raca);
    cout << "Idade: ";
    cin >> cadAnimal->idade;
    cin.ignore();

}

void exibirCadastro(Animal *cadAnimal){
    cout << "Nome: " << cadAnimal->nome << endl;
    cout << "Especie: " << cadAnimal->especie << endl;
    cout << "Raca: " << cadAnimal->raca << endl;
    cout << "Idade: " << cadAnimal->idade << endl;

}
int main()
{
    Animal animal; // criado objeto

    cadastrarAnimal (&animal);
    exibirCadastro (&animal);
    return 0;
}

