#include <iostream>
#include "hash.cpp"

using namespace std;

int main(){
    int tamanhoVetor, max;
    cout << "Programa gerador de hash!\n";
    cout << "Digite o tamanho da Hash! \n";
    cin >> tamanhoVetor;
    cout << "Digite o numero maximo de elementos!\n";
    cin >> max;
    cout << "O fator de carga e: " << (float)max / (float)tamanhoVetor << endl;
    
    Hash alunoHash(tamanhoVetor, max);
    int opcao;
    int ra;
    string nome;
    bool busca;

    do
    {
        /* code */

        cout << "Digite 0 para parar o algoritmo!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para buscar um elemento!\n";
        cout << "Digite 4 para imprimir o Hash!\n";
        cin >> opcao;

        if (opcao == 1)
        {
            cout << "Qual é o RA do aluno?\n";
            cin >> ra;
            cout << "Qual é o nome do aluno?\n";
            cin >> nome;
            Aluno aluno(ra, nome);
            alunoHash.inserir(aluno);
        }

        else if (opcao == 2)
        {
            cout << "Qual é o RA do aluno?\n";
            cin >> ra;
            Aluno aluno(ra, " ");
            alunoHash.deletar(aluno);
        }

        else if (opcao == 3)
        {
            cout << "Qual é o RA do aluno que será buscado?\n";
            cin >> ra;
            Aluno aluno(ra, " ");
            alunoHash.buscar(aluno, busca);
            if(busca){
                cout << "Aluno encontrado!\n";
                cout << "Nome: " << aluno.getNome() << endl;
                cout << "RA:   " << aluno.getRa() << endl;
            }   else{
                cout << "Aluno não encontrado\n";
            }
        }

        else if (opcao == 4)
        {
            alunoHash.imprimir();
        }
        

    } while (opcao != 0);
    cout << "Programa Encerrado";

}