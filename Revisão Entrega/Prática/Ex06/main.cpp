#include <iostream>
#include <cstring>
using namespace std;

struct Pessoa{
    string nome;
    string cpf;
    int idade;
};
int main()
{
    Pessoa pessoa;
    Pessoa *ptr = &pessoa;

    cout << "Insira o nome: ";
    getline(cin, ptr->nome);
    cin.ignore();

    cout << "Insira o cpf: ";
    getline(cin, ptr->cpf);

    cout << "Insira a idade: ";
    cin >> ptr->idade;
    cin.ignore();

    cout << endl;
    //Exibindo (ponteiro)
    cout << "Nome: " << pessoa.nome;//pessoa.nome;
    cout << "\nCPF: " << ptr->cpf;//pessoa.cpf;
    cout << "\nIdade: " << ptr->idade;//pessoa.idade;

    ptr->idade = 20;
    cout << endl;
    cout << "\nALTERANDO A IDADE C/ PONTEIRO: " << endl;
    cout << "\nIdade alterada: " << pessoa.idade;

    return 0;
}
