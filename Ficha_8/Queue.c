
#include "Queue.h"

void initQueue (Queue *q){
    (*q).inicio = NULL;
    (*q).fim = NULL;
}

int QisEmpty (Queue q){
    return q.inicio ? 0 : 1;
}

int enqueue (Queue *q, int x){

    int r = 0;
    LInt aux = (*q).fim;

    if(aux){
        aux->prox = newLInt(x, aux->prox);
        if(aux->prox)
            (*q).fim = aux->prox; 
        else
            r = 1;
    } else {
        (*q).inicio = newLInt(x, (*q).inicio);
        (*q).fim = (*q).inicio;
        if((*q).fim == NULL)
            r = 1;
    }

    return r;

}

int dequeue (Queue *q, int *x){
    LInt aux; 
    int r = 0;
    if(!QisEmpty(*q)){
        *x = (*q).inicio->valor;
        aux = (*q).inicio;
        (*q).inicio = (*q).inicio->prox;
        free(aux);
    } else 
        r = 1;

    return r;
}

int frontQ (Queue q, int *x){
    int r = 0;
    if(!QisEmpty(q)){
        *x = q.inicio->valor; 
    } else 
        r = 1;

    return r;
}