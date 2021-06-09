#ifndef LISTAS
#define LISTAS

#include <stdio.h>
#include <stdlib.h>

typedef struct slist {
    int valor;
    struct slist * prox;
}NLInt, *LInt;

typedef struct dlist {
    int valor;
    struct dlist *ant, *prox;
} *DList;

LInt newLInt (int x, LInt xs);
DList newDList (int x, DList xs);
#endif