
#include "Deque.h"

void initDeque (Deque *q){
    (*q).front = NULL;
    (*q).back = NULL;
}

int DisEmpty (Deque q){
    return q.front ? 0 : 1;
}

int pushBack (Deque *q, int x){
    
}
int pushFront (Deque *q, int x);
int popBack (Deque *q, int *x);
int popFront (Deque *q, int *x);
int popMax (Deque *q, int *x);
int back (Deque q, int *x);
int front (Deque q, int *x);