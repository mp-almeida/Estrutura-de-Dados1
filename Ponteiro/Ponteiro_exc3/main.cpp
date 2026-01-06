#include <iostream>

using namespace std;
// Programa que recebe nome, nota válida (0.0 e 100.0)
// e nome da disciplina. Faça a verificação se o aluno
// passou ou não. Sabe-se que nota >=60 ele está aprovado
// e caso contrário está reprovado. Utilize a seguinte estrutura:
// double nota, *ptrNota;
// string nome, disc, *ptrNome;
// prtNota = &nota;
// ptrNome = &nome;

int main()
{
    double nota, *ptrNota;
    string nome, disc, *ptrNome;
    ptrNota = &nota;
    ptrNome = &nome;

    do{
        cout << "\nInsira nome: ";
        getline(cin, nome);
        cin.ignore();
        cout << "Insira nota: ";
        cin >> nota;
        cin.ignore();
        cout << "Insira nome da disciplina: ";
        getline(cin, disc);
        cin.ignore();

    }while((nota < 0) || (nota > 100));

    *ptrNome = nome;
    *ptrNota = nota;

    cout << "Nome: " << *ptrNome;
    cout << "\nNota: " << *ptrNota;
    cout << "\nNome da disciplina: " << disc;
    if(*ptrNota >= 60.0){
        cout << "\nAprovado" << endl;
    }else{
        cout << "\nReprovado" << endl;
    }



    return 0;
}
