#include <iostream>
#include <cstring>
using namespace std;

struct Aluno{
    string nome;
    double nota;
    string disc;
};

void cadastroAluno (Aluno *cadAluno){
     do{
        cout << "\nInsira nome: ";
        getline(cin, cadAluno->nome);
        cin.ignore();
        cout << "Insira nota: ";
        cin >> cadAluno->nota;
        cin.ignore();
        cout << "Insira nome da disciplina: ";
        getline(cin, cadAluno->disc);
        cin.ignore();

    }while((cadAluno->nota < 0) || (cadAluno->nota > 100));
}

void exibirResultado(Aluno *cadAluno){
    cout << "Nome: " << cadAluno->nome;
    cout << "\nNota: " << cadAluno->nota;
    cout << "\nNome da disciplina: " << cadAluno->disc;
    if(cadAluno->nota >= 60.0){
        cout << "\nAprovado" << endl;
    }else{
        cout << "\nReprovado" << endl;
    }
}

int main()
{
    Aluno aluno;

    cadastroAluno(&aluno);
    exibirResultado(&aluno);

    return 0;
}
