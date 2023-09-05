#include "aluno.cpp"

class Hash{
    private:
    int funcaoHash(Aluno aluno);
    int maxItens;
    int maxPosicoes;
    int quantidadeItens;
    Aluno* estrutura;

    public:
    Hash(int tamanhoVetor, int max);
    ~Hash();
    bool estaCheio();
    int obterTamanhoAtual();
    void inserir(Aluno aluno);
    void deletar(Aluno aluno);
    void buscar(Aluno& aluno, bool& busca);
    void imprimir();

};