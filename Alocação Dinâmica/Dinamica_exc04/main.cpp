#include <iostream>
#include <cstring>

using namespace std;

struct Funcionario{
    string nome;
    int ano;
    string cargo;
    float sal;
};

void cadastro(Funcionario *func){
    if(!func)
        cout << "Memória insuficiente!!!";
    else{
        do{
            cout << "Informe o nome: ";
            cin >> func->nome;
            cout << "Informe o ano: ";
            cin >> func->ano;
            cout << "Informe o cargo: ";
            cin >> func->cargo;
            cout << "Informe o salario: ";
            cin >> func-> sal;
        }while(func->ano > 2025);
    }
}

void exibir(Funcionario *func){
    cout << "\n---Funcionario---" << endl;
    cout << "Nome: " << func->nome << endl;
    cout << "Ano: " << func->ano << endl;
    cout << "Cargo: " << func->cargo << endl;
    cout << "Salario: " << func->sal << endl;
}

int main()
{
    Funcionario *func = new Funcionario;

    cadastro(func);
    exibir(func);

    delete[] func;
    return 0;
}
