#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {
    Pilha* pilha = criarPilha(5);

    empilhar(pilha, 3);
    empilhar(pilha, 4);
    empilhar(pilha, 5);
    empilhar(pilha, 6);

    printf("TOPO: %d\n", topoPilha(pilha));

    desempilhar(pilha);
    printf("TOPO DESEMPILHADO: %d\n", topoPilha(pilha));

    liberarPilha(pilha);

//----------------------------------------------------------------------------
    Fila* fila = criarFila(5);

    enfileirar(fila, 45);
    enfileirar(fila, 46);
    enfileirar(fila, 47);

    printf("FRENTE: %d\n", frenteFila(fila));

    desenfileirar(fila);
    printf("FRENTE DESENFILEIRADO: %d\n", frenteFila(fila));

    liberarFila(fila);

    return 0;
}
