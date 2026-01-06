#include <iostream>

using namespace std;

int main()
{
    string nome;
    string *ptrSting;

    cout << "Insira um nome: ";
    cin >> nome;

    ptrSting = &nome;

    cout << "\nNome: " << nome;
    cout << "\nNome (ponteiro): " << *ptrSting;

    cout << endl << endl;
    cout << "\nREPOSTA: " << endl;
    cout << "\nVariável acessa de forma direta o que foi armazenado"
     "\nPonteiro acessa de forma indireta o que foi armazenado"
      "utilizando o endereço da variável (nome) para acessar"
      "seu contéudo" << endl;
    return 0;
}
