typedef int TipoItem;
#include <iostream>
const int maxItens = 100;

class  Fila
{
private:
    int primero, ultimo;
    TipoItem* estrutura;
public:
     Fila();
    ~ Fila();

    bool isEmpty();
    bool isFull();
    void push(TipoItem item);
    TipoItem pop();
    void print();
};