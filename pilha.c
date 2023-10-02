#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criarPilha(int tamanho) {
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->itens = (int*)malloc(sizeof(int) * tamanho);
    pilha->tamanho = tamanho;
    pilha->topo = -1;
    return pilha;
}

void liberarPilha(Pilha* pilha) {
    free(pilha->itens);
    free(pilha);
}

int empilhar(Pilha* pilha, int elemento) {
    if (pilha->topo < pilha->tamanho - 1) {
        pilha->itens[++pilha->topo] = elemento;
        return 1; 
    }
    return 0; 
}

int desempilhar(Pilha* pilha) {
    if (pilha->topo >= 0) {
        return pilha->itens[pilha->topo--];
    }
    return -1; 
}

int topoPilha(Pilha* pilha) {
    if (pilha->topo >= 0) {
        return pilha->itens[pilha->topo];
    }
    return -1; 
}
