#include "Pilha.hpp"

Pilha::Pilha()
{
    tamanho = 0;
    estrutura = new TipoItem[maxLenght];
}
Pilha::~Pilha()
{
    delete[] estrutura;
}
void Pilha::Push(TipoItem item)
{
    if (isFull())
    {
        cout << "A pilha está cheia. você não pode adicionar mais itens" << endl;
    }
    else
    {
        estrutura[tamanho] = item;
        tamanho += 1;
    }
}
TipoItem Pilha::Pop()
{
    if (isEmpty())
    {
        cout << "A pilha está vazia\n";
        return 0;
    }

    tamanho--;
    return estrutura[tamanho];
}
int Pilha::Lengh()
{
    return tamanho;
}
void Pilha::Print()
{
    cout << "[ ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << estrutura[i] << " ";
    }
    cout << "]" << endl;
}
bool Pilha::isFull()s
{
    return (maxLenght == tamanho);
}
bool Pilha::isEmpty()
{
    return (tamanho == 0);
}