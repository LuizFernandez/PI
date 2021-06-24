#ifndef PARTEA
#define PARTEA

#include <stdio.h>
#include <stdlib.h>

typedef struct slist {
    int valor;
    struct slist *prox;
}NLInt, *LInt;

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
}NABin, *ABin;

int retiraNeg (int v[], int N);
int difConsecutivos (char s[]);
int maximo (LInt l);
int removeAll (LInt *l, int x);
LInt arrayToList (int v[], int N);

#endif