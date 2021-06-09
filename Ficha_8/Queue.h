#ifndef QUEUE
#define QUEUE

#include "Listas.h"

typedef struct {
    LInt inicio,fim;
} Queue;

void initQueue (Queue *q);
int QisEmpty (Queue q);
int enqueue (Queue *q, int x);
int dequeue (Queue *q, int *x);
int frontQ (Queue q, int *x);

#endif