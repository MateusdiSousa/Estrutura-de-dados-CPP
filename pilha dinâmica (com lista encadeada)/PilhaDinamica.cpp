#include <iostream>
#include "PilhaDinamica.hpp"
#include "stddef.h"

using namespace std;

PilhaDinamica::PilhaDinamica(){
    noTopo = NULL;
}


PilhaDinamica::~PilhaDinamica(){
    No* noTemp;
    while(noTopo != NULL){
        noTemp = noTopo;
        noTopo = noTopo->proximo;
        delete noTemp; 
    }
}


bool PilhaDinamica::isEmpty(){
    return (noTopo == NULL);
}


bool PilhaDinamica::isFull(){
    No* noNovo;
    try
    {
        noNovo = new No;
        delete noNovo;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;  
    }
    
}

void PilhaDinamica::push(TipoItem item){
    if(isFull()){
        cout << "Pilha está cheia!\n";
        cout << "Não foi possível inserir esse elemento na pilha";
    } else {
    No* noNovo = new No;
    noNovo->valor = item;
    noNovo->proximo = noTopo; //Apontando para o topo anterior
    noTopo = noNovo; }          //noNovo sendo o novo topo
}

TipoItem PilhaDinamica::pop(){
    if(isEmpty()){
        cout << "A pilha está vazia!\n";
        cout << "Não é possível remover item!\n";
        return 0;
    } else {
        No* noTemp;
        noTemp = noTopo;
        TipoItem item = noTopo->valor;
        noTopo = noTopo->proximo;
        delete noTemp;
        return item;
    }
}

void PilhaDinamica::print(){
    No* noTemp = noTopo;
    cout << "Pilha: [";
    while(noTemp != NULL){
        cout << noTemp->valor << " ";
        noTemp = noTemp->proximo;
    }
    cout <<"] " << endl;
}

