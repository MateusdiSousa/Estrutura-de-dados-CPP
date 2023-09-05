#include <iostream>
#include "fila.cpp"

int main(){
    Fila fila;
    fila.push(12);
    fila.push(2);
    fila.push(3);
    fila.push(4);
    fila.pop();
    fila.print();
}