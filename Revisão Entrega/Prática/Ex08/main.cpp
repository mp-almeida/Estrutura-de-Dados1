#include <iostream>

using namespace std;

struct Produto{
    int cod;
    string nome;
    int qtd;
    float preco;
};

void cadastrarProduto(Produto *produto, int n){
    for(int i =0; i < n; i++){
        cout << endl;
        cout << "PRODUTO " << i+1 << endl;
        cout << "Insira codigo: ";
        cin >> produto[i].cod;
        cin.ignore();
        cout << "Insira nome: ";
        getline(cin, produto[i].nome);
        cin.ignore();
        cout << "Insira quantidade disponivel: ";
        cin >> produto[i].qtd;
        cin.ignore();
        cout << "Insira o preco: ";
        cin >> produto[i].preco;
        cin.ignore();
    }
}

void maiorPreco(Produto *produto, int n){
    int indicemaior = 0;
    for(int i =0; i < n; i++){
        if(produto[i].preco > produto[indicemaior].preco){
            indicemaior = i;
        }
    }
    cout << endl;
    cout << "MAIOR PRECO" << endl;
    cout << "Codigo: " << produto[indicemaior].cod << endl;
    cout << "Nome: " << produto[indicemaior].nome << endl;
    cout << "Quantidade disponivel: " << produto[indicemaior].qtd << endl;
    cout << "Preco: " << produto[indicemaior].preco << endl;
}

void menorPreco(Produto *produto, int n){
    int indicemenor = 0;
    for(int i =0; i < n; i++){
        if(produto[i].preco < produto[indicemenor].preco){
            indicemenor = i;
        }
    }
    cout << endl;
    cout << "MAENOR PRECO" << endl;
    cout << "Codigo: " << produto[indicemenor].cod << endl;
    cout << "Nome: " << produto[indicemenor].nome << endl;
    cout << "Quantidade disponivel: " << produto[indicemenor].qtd << endl;
    cout << "Preco: " << produto[indicemenor].preco << endl;
}
int main()
{
    int n;
    cout << "Insira a quantidade de produtos para cadastrar: ";
    cin >> n;

    Produto *produto = new Produto[n];

    if(!produto){
        cout << "MEMÓRIA INSUFICIENTE" << endl;
    }else{
        cadastrarProduto(produto, n);
        maiorPreco(produto, n);
        menorPreco(produto, n);
    }

    return 0;

    delete[] produto;
}
