#include "filaDinamica.hpp"
using namespace std;

FilaDinamica::FilaDinamica()
{
    ultimo = NULL;
    primeiro = NULL;
}
FilaDinamica::~FilaDinamica()
{
    while (primeiro != NULL)
    {
        No* noTemporario = primeiro;
        primeiro = primeiro->proximo;
        delete noTemporario;
    }
    ultimo = NULL;
}

bool FilaDinamica::isEmpty()
{
    return (primeiro == NULL);
}

bool FilaDinamica::isFull()
{
    No* noNovo;
    try
    {
        noNovo = new No;
        delete noNovo;
        return false;
    }
    catch (bad_alloc exception)
    {
        return true;
    }
}

void FilaDinamica::push(TipoItem item)
{
    if (isFull())
    {
        cout << "A fila está cheia. Não foi possível adicionar itens";
    }
    else
    {
        No* novoNo = new No;
        novoNo->valor = item;  //O novo no da fila recebe o valor do argumento, comm ele acabou de entrar será o ultimo da fila, logo seu próximo não existe ou seja proximo = NULL;
        novoNo->proximo = NULL;
        if (primeiro == NULL)
        {
            primeiro = novoNo;  //Se o primeiro for igual a NULL significa que a fila não possui um nenhum elemento, logo o elemento adicionado seráo primeiro.
        }
        else
        {
            ultimo->proximo = novoNo;       //Agora o ultimo da fila vai apontar a proxima da fila para o novo elemento.
        }
        ultimo = novoNo;                    //E o novo elemento se torna o ultimo da fila
    }
}

TipoItem FilaDinamica::pop()
{
    if (isEmpty())
    {
        cout << "A fila esta vazia\n";
        cout << "Nao foi possivel adicionar elemento\n";
        return 0;
    }
    else
    {
        No* noTemporario = primeiro;        //Criamos um nó temporário que aponta para o primeiro da fila
        TipoItem item = primeiro->valor;    //Criamos uma variável que recebe o valor do primeiro
        primeiro = primeiro->proximo;       //Agora o próximo da fila será o novo primeiro
        if (primeiro == NULL){
            ultimo = NULL;
        }
        delete noTemporario;                //Deletamos o noTemporário, ou seja liberamos o espaço da memória do antigo primeiro que saiu da fila
        return item;                        //Retiramos o antigo primeiro da lista
    }
}
void FilaDinamica::print()
{
    No* noTemp = primeiro;
    cout << "pilha dinamica:[ ";
    while (noTemp != NULL)
    {
        cout << noTemp->valor << " ";
        noTemp = noTemp->proximo;
    }
    cout << "]";
}