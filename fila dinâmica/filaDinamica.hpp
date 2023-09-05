#include <iostream>
#include <string>

using namespace std;

typedef int TipoItem;

struct No
{
    TipoItem valor;
    No *proximo;
};

class FilaDinamica
{

private:
    No* ultimo;
    No* primeiro;
public:
    FilaDinamica();
    ~FilaDinamica();
    TipoItem pop();
    void push(TipoItem);
    bool isFull();
    bool isEmpty();
    void print();
};
