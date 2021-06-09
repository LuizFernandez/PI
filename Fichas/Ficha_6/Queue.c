
#include "Queue.h"

/*---------------Static Queue---------------*/

void SinitQueue (SQueue q){
    q->front = 0;
    q->length = 0;
}

int SisEmptyQ (SQueue q){
    return q->length = 0;
}

int Senqueue (SQueue q, int x){
    if(q->length == Max) return 1;

    q->values[(q->front + q->length) % Max] = x;
    q->length++;
    return 0;
}

int Sdequeue (SQueue q, int *x){
    if(SisEmptyQ(q)) return 1;

    *x = q->values[q->front];
    q->length--;
    q->front = (q->front + 1) % Max;
    return 0;
}

int Sfront (SQueue q, int *x){
    if(SisEmptyQ(q)) return 1;

    *x = q->values[q->front];
    return 0;
}

void ShowSQueue (SQueue q){
    int i, p;
    printf ("%d Items: ", q->length);
    for (i=0, p=q->front; i<q->length; i++) {
        printf ("%d ", q->values[p]);
        p = (p+1)%Max;
    }
    putchar ('\n');
}

/*---------------Dynamic Queue---------------*/

int dupQueue(DQueue q){

    int r = 0;
    int *t = malloc(2* q->size * sizeof(int));

    if(!t) r = 1;
    else{
        for(int i = 0; i < q->length; i++)
            t[i] = q->values[i];
        free(q->values);
        q->values= t;
        q->size *= 2;
    }

    return r;

}

void DinitQueue (DQueue q){
    q->front = 0;
    q->length = 0;
    q->size = Max;
    q->values = malloc(sizeof(int) * q->size);
}

int  DisEmptyQ  (DQueue q){
    return q->size == 0;
}

int  Denqueue   (DQueue q, int x){

    int r = 0;

    if(q->length == q->size) r = dupQueue(q);
    if(!r){
        q->values[(q->front + q->length) % q->size] = x;
        q->length++;
    }

    return r;

}

int  Ddequeue   (DQueue q, int *x){

    if(DisEmptyQ(q)) return 1;

    *x = q->values[q->front];
    q->front = (q->front++) % q->size;
    q->length--;

    return 0;

}

int  Dfront     (DQueue q, int *x){

    if(DisEmptyQ(q)) return 1;

    *x = q->values[q->front];

    return 0;

}

void ShowDQueue (DQueue q){
    int i, p;
    printf ("%d Items: ", q->length);
    for (i=0, p=q->front; i<q->length; i++) {
        printf ("%d ", q->values[p]);
        p = (p+1)%q->size;
    }
    putchar ('\n');
}
