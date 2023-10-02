#ifndef FILA_H
#define FILA_H

typedef struct Fila {
    int *itens;
    int tamanho;
    int inicio;
    int fim;
    int quantidade;
} Fila;

Fila* criarFila(int tamanho);
void liberarFila(Fila* fila);
int enfileirar(Fila* fila, int elemento);
int desenfileirar(Fila* fila);
int frenteFila(Fila* fila);

#endif
