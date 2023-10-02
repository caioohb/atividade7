#ifndef PILHA_H
#define PILHA_H

typedef struct Pilha {
    int *itens;
    int tamanho;
    int topo;
} Pilha;

Pilha* criarPilha(int tamanho);
void liberarPilha(Pilha* pilha);
int empilhar(Pilha* pilha, int elemento);
int desempilhar(Pilha* pilha);
int topoPilha(Pilha* pilha);

#endif
