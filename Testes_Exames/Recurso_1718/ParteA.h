#ifndef PARTE_A
#define PARTE_A

#include <stdio.h>
#include <math.h>

typedef struct posicao {
    int x, y;
} Posicao;

typedef struct slist {
    int valor;
    struct slist *prox;
}NLInt, *LInt;

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
}NABin, *ABin;

#endif