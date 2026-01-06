#include <iostream>

using namespace std;
struct Funcionario{
    string nome;
    int ano;
    string cargo;
    float sal;
};

void cadastro(Funcionario *func, int n, int maior){
    if(!func)
        cout << "Memória insuficiente!!!";
    else{
        for(int i =0; i < n; i++){
            do{
                cout << endl;
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
    cout << maior << endl;
}

int calMaior (Funcionario *func, int n){
    int indiceMaior;
    for(int i =0; i < n; i++){
        if(func->sal > func[indiceMaior].sal){
            indiceMaior = i;
        }
    }
    return indiceMaior;
}

void exibir(Funcionario *func, int maior, int indmaior){

        cout << "\n---Funcionario c/ > salario ---" << endl;
        cout << "Nome: " << func[indmaior].nome << endl;
        cout << "Ano: " << func[indmaior].ano << endl;
        cout << "Cargo: " << func[indmaior].cargo << endl;
        cout << "Salario: " << func[indmaior].sal << endl;

}

int main()
{
    int qtd =5;
    int maiorSal = 0;


    Funcionario *func = new Funcionario[qtd];

    cadastro(func, qtd, maiorSal);

    int indice = calMaior(func, qtd);

    exibir(func, maiorSal, indice);

    delete[] func;
    return 0;
}
