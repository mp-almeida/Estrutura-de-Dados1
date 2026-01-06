#include <iostream>
#include <cstring>
using namespace std;

struct Pessoa{
    string nome;
    string cpf;
    int idade;
};

void cadastrarPessoa(Pessoa *cadPessoa){
    for(int i = 0; i < 4; i++){

        cin.ignore();
        cout << "Insira o nome: ";
        getline(cin, cadPessoa[i].nome);
        cin.ignore();
        cout << "Insira o CPF: ";
        getline(cin, cadPessoa[i].cpf);
        cin.ignore();
        cout << "Insira a idade: ";
        cin >> cadPessoa[i].idade;
        cin.ignore();
        cout << endl;
    }
}

void exibirCadastro(Pessoa *cadPessoa){
    for(int i = 0; i < 4; i++){
        cout << endl;
        cout << "Nome: " << cadPessoa[i].nome << endl;
        cout << "CPF: " << cadPessoa[i].cpf << endl;
        cout << "Idade: " << cadPessoa[i].idade << endl;
    }
}

int main()
{
    Pessoa *cadpessoa = new Pessoa[4];

    cadastrarPessoa(cadpessoa);
    exibirCadastro(cadpessoa);
    return 0;
}
