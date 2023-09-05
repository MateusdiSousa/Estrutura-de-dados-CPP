// pilha = stack
#include <iostream>
#pragma once
using namespace std;

typedef int TipoItem;
const int maxLenght = 100;

class Pilha
{
private:
    int *estrutura;
    int tamanho;

public:
    Pilha();
    ~Pilha();
    void Push(TipoItem);
    TipoItem Pop();
    int Lengh();
    void Print();
    bool isFull();
    bool isEmpty();
};