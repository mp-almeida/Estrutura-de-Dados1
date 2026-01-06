#include <iostream>
#include <cstring>

using namespace std;

struct CadastroUser {
    string nome;
    string cpf;
    int idade;
    string sexo;
} stdCad;

void cadastro(CadastroUser *cad){

    cin.ignore();
    cout << "Insira o nome: ";
    cin >> cad->nome;
    cin.ignore();

    cout << "\nInsira o CPF (somente numeros): ";
    getline(cin, cad->cpf);
    fflush(stdin);

    cout << "\nInsira a idade: ";
    cin >> cad->idade;
    fflush(stdin);

    cout <<"\nInsira o sexo (F- feminino ou M- masculino): ";
    cin >> cad->sexo;
    cin.ignore();

}

void exibir(CadastroUser *cad){
    cout << endl << endl;
    cout << "Nome: " << cad->nome << endl;
    cout << "CPF: " << cad->cpf << endl;
    cout << "Idade: " << cad->idade << endl;
    cout << "Sexo: " << cad->sexo << endl;

}
int main()
{
    CadastroUser cad ;
    //= new CadastroUser()
    cadastro(&cad); // cadastro(cad)
    exibir(&cad);  // cadastro(cad)


    return 0;
}
