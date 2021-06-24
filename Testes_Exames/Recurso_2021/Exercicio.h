#ifndef EXERCICIO
#define EXERCICIO

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct lnodo{
    int valor;
    struct lnodo *prox;
}NLInt, *LInt;

typedef struct nodo{
    int valor;
    struct nodo *pai, *esq, *dir;
}NABin, *ABin;

typedef struct palavras{
    char *palavra;
    int nOcorr;
    struct palavras *esq, *dir;
}NPalavras, *Palavras;

int paresImpares(int v[],int N);
void merge(LInt *r,LInt a,LInt b);
void latino(int N,int m[N][N]);
ABin next(ABin a);
int acrescentaPal(Palavras *p,char *pal);


#endif