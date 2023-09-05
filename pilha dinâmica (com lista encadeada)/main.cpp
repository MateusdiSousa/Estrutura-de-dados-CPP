#include <iostream>
#include "PilhaDinamica.cpp"

using namespace std;

int main(){
    PilhaDinamica pilha1;
    TipoItem item;
    int opcao;
    cout << "Programa gerador de pilha: \n";

    do
    {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a pilha!\n";
        cin >> opcao;

        if(opcao == 1){
            cout << "Digite o numero que deseja inserir: \n";
            cin >> item;
            pilha1.push(item);
        } else if (opcao == 2 ){
            pilha1.pop();
        } else if (opcao == 3){
            pilha1.print();
        }
    } while (opcao != 0);
    cout << "Programa encerrado!\n";
    
}