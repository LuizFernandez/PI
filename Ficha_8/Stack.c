
#include "Stack.h"

void initStack (Stack *s){
    *s = NULL;
}

int SisEmpty (Stack s){
    return s? 0 : 1;
}

int push (Stack *s, int x){
    int r = 1;
    Stack s1 = newLInt(x,*s);
    if(s1){
        *s = s1;
        r = 0;
    }

    return r;
}

int pop (Stack *s, int *x){
    int r = 1;
    Stack aux;
    if(!SisEmpty(*s)){
        *x = (*s)->valor;
        aux = (*s);
        (*s) = (*s)->prox;
        free(aux);
        r = 0;    
    }

    return r;
}

int top (Stack s, int *x){
    int r = 1;
    Stack aux;
    if(!SisEmpty(s)){
        *x = s->valor;
        r = 0;    
    }

    return r;
}