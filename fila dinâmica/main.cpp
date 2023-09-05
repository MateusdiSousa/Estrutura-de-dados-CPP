#include "filaDinamica.cpp"
#include <iostream>
using namespace std;

int main(){
    FilaDinamica fila1;
    fila1.push(5);
    fila1.push(20);
    fila1.push(3);
    fila1.pop();
    fila1.push(40);
    fila1.print();
}