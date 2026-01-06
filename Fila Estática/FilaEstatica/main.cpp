#include <iostream>
#include "FilaEstatica.h"
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int opc;
    FILA fila;
    criarFila(&fila);


    do{
        cout << "\nFILA ESTÁTICA\n"
                "Informe a opção desejada\n"
                "1- Inserir elemento\n"
                "2- Exibir primeiro elemento\n"
                "3- Exibir último elemento\n"
                "4- Remover elemento\n"
                "5- Exibir elementos da fila\n"
                "------>\n";
        cin >> opc;

        if(opc > 5){
            cout << "Opção inválida!!\n";
        }

        switch(opc){
            case 1:
                inserirElemento(&fila);
                break;
            case 2:
                exibirElementoPrimeiro(&fila);
                break;
            case 3:
                exibirElementoUltimo(&fila);
                break;
            case 4:
                removerElemento(&fila);
                break;
            case 5:
                exibirFila(&fila);
                break;
            case 0:
                cout << "Saindo do menu!!! Thanks ";
                break;
        }
    }while(opc != 0);

    return 0;
}
