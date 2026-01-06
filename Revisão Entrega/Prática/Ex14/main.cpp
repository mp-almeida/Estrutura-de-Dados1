#include <iostream>

using namespace std;

struct Funcionario{
    string nome;
    string cargo;
    float sal;
};

void preencher(Funcionario *func){
    do{
        cout << "Insira nome: ";
        getline(cin, func->nome);
        cin.ignore();
        cout << "Insira o cargo: ";
        getline(cin, func->cargo);
        cin.ignore();
        cout << "Informe o salario: ";
        cin >> func->sal;
        cin.ignore();
    }while (func->sal < 1500);
}

void exibir(Funcionario *func){
    cout << "Nome: " << func->nome << endl;
    cout << "Cargo: " << func->cargo << endl;
    cout << "Salario: " << func->sal << endl;

}
int main()
{
    Funcionario *func = new Funcionario; // alocação dinâmica

    preencher(func);
    exibir(func);
    return 0;
}
