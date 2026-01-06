#include <iostream>
#include <cstring>
using namespace std;

struct Funcionario{
    string nome;
    int ano;
    string cargo;
    float sal;
};

int main()
{
    Funcionario *func = new Funcionario;

    do{
        cout << "Informe o nome: ";
        cin >> func->nome;
        cout << "Informe o ano: ";
        cin >> func->ano;
        cout << "Informe o cargo: ";
        cin >> func->cargo;
        cout << "Informe o salario: ";
        cin >> func-> sal;
    }while((func->ano > 2025) || (func->ano < 2006));

    cout << "---Funcionario---" << endl;
    cout << "Nome: " << func->nome << endl;
    cout << "Ano: " << func->ano << endl;
    cout << "Cargo: " << func->cargo << endl;
    cout << "Salario: " << func->sal << endl;

    return 0;
}
