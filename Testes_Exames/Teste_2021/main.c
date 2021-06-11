
#include "Exercicio.h"

int main(){

    int sum = sumhtpo(10);
    printf("%d\n", sum);
    
    int v[10] = {1,2,3,3,3,5,5,5,8,0};
    int vMax;
    int freq = moda(v,10,&vMax);

    printf("Moda de v é %d com uma frequência de %d\n", vMax, freq);

    LInt l = malloc(sizeof(NLInt));
    l->valor = 3;
    l->prox = malloc(sizeof(NLInt));
    l->prox->valor = 2;
    l->prox->prox= malloc(sizeof(NLInt));
    l->prox->prox->valor = 4;
    l->prox->prox->prox = malloc(sizeof(NLInt));
    l->prox->prox->prox->valor = 7;
    l->prox->prox->prox->prox = malloc(sizeof(NLInt));
    l->prox->prox->prox->prox->valor = 9;
    l->prox->prox->prox->prox->prox = NULL;

    ABin a = malloc(sizeof(NABin));
    a->valor = 5;
    a->pai = NULL;
    a->esq = malloc(sizeof(NABin));
    a->esq->valor = 3;
    a->esq->pai = a;
    a->esq->esq = malloc(sizeof(NABin));
    a->esq->esq->valor = 1;
    a->esq->esq->pai = a->esq;
    a->esq->esq->esq = NULL;
    a->esq->esq->dir = NULL;
    a->esq->dir = malloc(sizeof(NABin));
    a->esq->dir->valor = 4;
    a->esq->dir->pai = a->esq;
    a->esq->dir->esq = NULL;
    a->esq->dir->dir = NULL;
    a->dir = malloc(sizeof(NABin));
    a->dir->valor = 6;
    a->dir->pai = a;
    a->dir->esq = NULL;
    a->dir->dir = NULL;

    int r = procura(&l,4);
    caminho(a->esq->dir);
    int r2 = freeAB(a);

    return 0;
}