#include "hash.h"
#include <iostream>

using namespace std;

int Hash::funcaoHash(Aluno aluno)
{
    return (aluno.getRa() % maxPosicoes);
}
Hash::Hash(int tamanhoVetor, int max)
{
    quantidadeItens = 0;
    maxItens = max;
    maxPosicoes = tamanhoVetor;
    estrutura = new Aluno[tamanhoVetor];
}
Hash::~Hash()
{
    delete[] estrutura;
}
bool Hash::estaCheio()
{
    return (quantidadeItens == maxItens);
}
int Hash::obterTamanhoAtual()
{
    return quantidadeItens;
}
void Hash::inserir(Aluno aluno)
{
    int local = funcaoHash(aluno);
    estrutura[local] = aluno;
    quantidadeItens++;
}
void Hash::deletar(Aluno aluno)
{
    int local = funcaoHash(aluno);
    if (estrutura[local].getRa() != -1)
    {
        estrutura[local] = Aluno(-1, " ");
        quantidadeItens--;
    }
}
void Hash::buscar(Aluno &aluno, bool &busca)
{
    int local = funcaoHash(aluno);
    Aluno aux = estrutura[local];
    if (aluno.getRa() != aux.getRa())
    {
        busca = false;
    }
    else
    {
        busca = true;
        aluno = aux;
    }
}

void Hash::imprimir()
{
    cout << "Tabela Hash: \n";
    for (int i = 0; i < maxPosicoes; i++)
    {
        if (estrutura[i].getRa() != -1)
        {
            cout << i << ":" << estrutura[i].getRa() << estrutura->getNome() << endl;
        }
    }
}