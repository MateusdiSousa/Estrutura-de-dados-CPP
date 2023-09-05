#include <iostream>
#include "Pilha.cpp"
using namespace std;

int main(){
    Pilha pilha1;
    int opcao;
    do
    {
        cout << "Digite 0 para encerrar o programa." << endl;
        cout << "Digite 1 para inserir um elemento." << endl;
        cout << "Digite 2 para retirar um elemento." << endl;
        cout << "Digite 3 para imprimir a pilha." << endl;
        cout << "Digite uma das opções: ";
        cin >> opcao;

        if(opcao == 1){
            cout << "Digite o numero que deseja inserir: ";
            TipoItem elemento;
            cin >> elemento ;
            cout << elemento;
            cout << "\n";
            pilha1.Push(elemento);
        }

        if(opcao == 2){
            pilha1.Pop();
            cout << "Item removido!\n";
        }

        if(opcao == 3){
            pilha1.Print();
        }

    } while (opcao != 0);
    
    cout << "Programa encerrado!" << endl;
}