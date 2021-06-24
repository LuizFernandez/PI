
#include "Exercicio.h"

void swap(int v[], int i, int j){

    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;

}


int paresImpares(int v[],int N){

    int pares = 0;

    for(int i = 0; i < N; i++){
        for(int j = (i+1); j < N; j++)
            if(v[j]%2 == 0){
                swap(v, i, j);
                pares++;
                break;
            }

    }

    return pares;

}

void merge(LInt *r,LInt a,LInt b){

    while(a && b){
        if(a->valor < b->valor){
            *r = a;
            a = a->prox;
        }else{
            *r = b;
            b = b->prox;
        }

        r = &((*r)->prox);
    }

    if(a)
        *r = a;
    else
        *r = b;

}

void latino(int N, int m[N][N]){
    
    for(int i = 0; i < N; i++){
        int n = i+1;
        for(int j = 0; j < N; j++){
            m[i][j] = n;
            n++;
            if(n > N)
                n = 1;
        }
    }
}

ABin next(ABin a){

    if(!a) return NULL;

    if(!a->dir) 
        return a->pai;
    else
        return a->dir;

}

void rodaEsquerda (Palavras *a){
    Palavras b = (*a)->dir;
    (*a)->dir = b->esq;
    b->esq = (*a);
    *a = b;
}

void rodaDireita (Palavras *a){
    Palavras b = (*a)->esq;
    (*a)->esq = b->dir;
    b->dir = *a;
    *a = b;
}

void rotateTree(Palavras *p, int N, char** movs){

    for(int i = 0; i < N; i++){
        if(strcmp(movs[i], "dir") == 0){
            rodaDireita(p);
        } else if(strcmp(movs[i], "esq") == 0)
            rodaEsquerda(p);
    }
}

int acrescentaPal(Palavras *p,char *pal){

    int maior = (*p)->nOcorr;
    char** movs = malloc(sizeof(char*) * 100);
    int len = 0, found = 0;
    Palavras aux = *p;
    int r = 0;

    while((*p) && !found){
        if(strcmp((*p)->palavra, pal) == 0){
            (*p)->nOcorr++;
            int r = (*p)->nOcorr;
            found = 1;
            if(maior < (*p)->nOcorr)
                rotateTree(&aux, len, movs);
        }else if(strcmp((*p)->palavra, pal) < 0){
            movs[len++] = strdup("dir");
            p = &((*p)->dir);
        }else{
            movs[len++] = strdup("esq");
            p = &((*p)->esq);
        }
    }

    if(!(*p)){
        Palavras pala = malloc(sizeof(struct palavras));
        pala->palavra = strdup(pal);
        pala->nOcorr = 1;
        pala->dir = pala->esq = NULL;
        *p = pala;
    }

    return r;
}