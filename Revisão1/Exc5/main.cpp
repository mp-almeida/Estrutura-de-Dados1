#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int idade;
    struct CadastrarAluno{
        char nome [30];
        int ano;
        char pront[9];
    } strCadAluno;
    do{
    cout << "Informe o nome: " << endl;
    cin.getline(strCadAluno.nome, 30);
    cout << "Informe o ano: " << endl;
    cin >> strCadAluno.ano;
    fflush(stdin);
    cout << "Informe o prontuario: " << endl;
    cin.getline(strCadAluno.pront, 9);
    }while(strCadAluno.ano < 1900);

    cout << endl;
    cout << "Nome: " << strCadAluno.nome << endl;
    cout << "Ano de nascimento: " << strCadAluno.ano << endl;
    cout << "Prontuário: " << strCadAluno.pront << endl;
    idade = 2025 - strCadAluno.ano;
    cout << "Idade em 2025: " << idade << endl;


    return 0;
}
