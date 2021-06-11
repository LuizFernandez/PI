#ifndef TESTE2021
#define TESTE2021

#include <stdio.h>

typedef struct Lnodo{
    int valor;
    struct Lnodo *prox;
}NLInt, *LInt;

typedef struct Anodo {
    int valor;
    struct Anodo *pai, *esq, *dir;
}NABin, *ABin;

int sumhtpo (int n);
int moda(int v[], int N, int *m);
int procura (LInt *l, int x);
int freeAB(ABin a);
void caminho(ABin a);

#endif
