
typedef int TipoItem;

struct No
{
    TipoItem valor;
    No* proximo;
};


class PilhaDinamica{
    private:
        No* noTopo;
    public:
        PilhaDinamica();
        ~PilhaDinamica();
        bool isEmpty();
        bool isFull();
        void push(TipoItem);
        TipoItem pop();
        void print();
};  