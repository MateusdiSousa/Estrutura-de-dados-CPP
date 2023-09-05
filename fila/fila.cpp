#include "fila.hpp"
#include <iostream>
using namespace std;

Fila::Fila()
{
    primero = 0;
    ultimo = 0;
    estrutura = new TipoItem[maxItens];
}
Fila::~Fila()
{
    delete[] estrutura;
}

bool Fila::isEmpty()
{
    return (ultimo == primero);
}
bool Fila::isFull()
{
    return (ultimo - primero == maxItens);
}


void Fila::push(TipoItem item)
{
    if (isFull())
    {
        cout << "A fila está cheia\n";
        cout << "Esse elemento não pode ser adicionado\n";
    }
    else
    {
        estrutura[ultimo % maxItens] = item;
        ultimo++;
    }
}


TipoItem Fila::pop()
{
    if (isEmpty())
    {
        cout << "A fila está vazia\n";
        cout << "Você não possui elementos para remover\n";
    }
    else
    {
        primero++;
        return estrutura[(primero-1) % maxItens];
    }
}


void Fila::print()
{
    cout << "fila [ ";
    for (int i = primero; i < ultimo ; i++)
    {
        cout << estrutura[i%maxItens] << " ";
    }
    cout << "]";
}