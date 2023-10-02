#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* criarFila(int tamanho) {
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->itens = (int*)malloc(sizeof(int) * tamanho);
    fila->tamanho = tamanho;
    fila->inicio = 0;
    fila->fim = -1;
    fila->quantidade = 0;
    return fila;
}

void liberarFila(Fila* fila) {
    free(fila->itens);
    free(fila);
}

int enfileirar(Fila* fila, int elemento) {
    if (fila->quantidade < fila->tamanho) {
        if (fila->fim == fila->tamanho - 1) {
            fila->fim = -1;
        }
        fila->itens[++fila->fim] = elemento;
        fila->quantidade++;
        return 1;
    }
    return 0;
}

int desenfileirar(Fila* fila) {
    if (fila->quantidade > 0) {
        int elemento = fila->itens[fila->inicio++];
        if (fila->inicio == fila->tamanho) {
            fila->inicio = 0;
        }
        fila->quantidade--;
        return elemento;
    }
    return -1;
}

int frenteFila(Fila* fila) {
    if (fila->quantidade > 0) {
        return fila->itens[fila->inicio];
    }
    return -1;
}
