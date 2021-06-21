
#include "50Questoes_2.h"

/*---------------Exercicio 1-------------*/
int length (LInt l){
    int length = 0;

    while(l){
        length++;
        l = l->prox;
    }

    return length;
}

/*---------------Exercicio 2-------------*/
void freeL (LInt l){
    while(l){
        LInt temp = l;
        l = l->prox;
        free(l);
    }
}

/*---------------Exercicio 3-------------*/
void imprimeL (LInt l){

    while(l){
        printf("%d ", l->valor);
        l = l->prox;
    }
} 

/*---------------Exercicio 4-------------*/
LInt reverseL (LInt l){
    LInt rev = NULL;
    LInt ant = l;

    while(l){
        l = l->prox;
        ant->prox = rev;
        rev = ant;
        ant = l;   
    }

    return rev;
} 

/*---------------Exercicio 5-------------*/
void insertOrd(LInt *l, int x){

    LInt nodo;

    while(*l && (*l)->valor < x)
        l = &((*l)->prox);
    
    nodo = malloc(sizeof(NLInt));
    nodo->valor = x;
    nodo->prox = *l;
    
    *l = nodo;

}
/*---------------Exercicio 6-------------*/
int removeOneOrd (LInt *l, int x){

    int r = 1;

    while(*l && (*l)->valor != x)
        l = &((*l)->prox);

    if((*l)){
        r = 0;
        LInt temp = *l;
        *l = (*l)->prox;
        free(temp);
    }

    return r;

}

/*---------------Exercicio 7-------------*/
void merge (LInt *r, LInt l1, LInt l2){

    while(l1 && l2){
        if(l1->valor < l2->valor){
            *r = l1;
            l1 = l1->prox;
        }else{
            *r = l2;
            l2 = l2->prox;
        }

        r = &((*r)->prox);
    }

    if(l1)
        *r = l1;
    else
        *r = l2;

}

/*---------------Exercicio 8-------------*/
void splitQS (LInt l, int x, LInt *mx, LInt *Mx){

    while(l){
        if(l->valor < x){
            *mx = l;
            mx = &((*mx)->prox);
        }else{
            *Mx = l;
            Mx = &((*Mx)->prox);
        }

        l = l->prox;
    }

    *mx = NULL;
    *Mx = NULL;
}

/*---------------Exercicio 9-------------*/
LInt parteAmeio (LInt *l){
    
    int meio = length(*l)/2;
    if(meio == 0) return NULL;
    LInt y = (*l);
    LInt prev = NULL;

    for(int i = 0; i < meio; i++) {
        prev = (*l);
        (*l) = (*l)->prox;
    }

    prev->prox = NULL;
    return y;
}

/*---------------Exercicio 10-------------*/
int removeAll (LInt *l, int x){

    int r = 0;

    while(*l){
        if((*l)->valor == x){
            LInt tmp = *l;
            *l = (*l)->prox;
            free(tmp);
            r++;
        } else
            l = &((*l)->prox);
    }

    return r;
}

/*---------------Exercicio 11-------------*/
int removeDups (LInt *l){

    int rem = 0;

    while(*l){
        LInt prevAux = (*l), aux = (*l)->prox;
        while(aux){
            if(aux->valor == (*l)->valor) {
                prevAux->prox = aux->prox;
                rem++;
                free(aux);
            }
            else prevAux = aux;

            aux = prevAux->prox;
        }

        l = &((*l)->prox);
    }
    return rem;

}

/*---------------Exercicio 12-------------*/
int maior(LInt l){

    int maior = 0;

    while(l){
        if(l->valor > maior)
            maior = l->valor;
        
        l = l->prox;
    }

    return maior;
}

int removeMaiorL (LInt *l){

    int bigger = maior(*l);
    int found = 0;

    while(*l && !found){
        if((*l)->valor == bigger){
            LInt tmp = (*l);
            (*l) = ((*l)->prox);
            free(tmp);
            found = 1;
        }else{
            l = &((*l)->prox);
        }
        
    
    }

    return bigger;
}

/*---------------Exercicio 13-------------*/
void init (LInt *l){

    while(*l && (*l)->prox)
        l = &((*l)->prox);

    LInt tmp = *l;
    *l = NULL;
    free(tmp);
    
}

/*---------------Exercicio 14-------------*/
void appendL (LInt *l, int x){

    while(*l && (*l)->prox)
        l = &((*l)->prox);
    
    LInt nodo = malloc(sizeof(NLInt));
    nodo->valor = x;
    nodo->prox = NULL;
    if(!(*l))
        *l = nodo;
    else
        (*l)->prox = nodo;
}

/*---------------Exercicio 15-------------*/
void concatL (LInt *a, LInt b){

    while(*a)
        a = &((*a)->prox);
    
    *a = b;

}

/*---------------Exercicio 16-------------*/
LInt cloneL (LInt l){

    LInt r = NULL, *sitio;
    sitio = &r;

    while(l){
        *sitio = malloc(sizeof(NLInt));
        (*sitio)->valor = l->valor;
        sitio = &((*sitio)->prox);
        l = l->prox;
    }

    return r;

}

/*---------------Exercicio 17-------------*/
LInt cloneRev (LInt l){

    LInt list = NULL;

    while(l) {
        LInt new = malloc(sizeof(NLInt));
        new->valor = l->valor;
        new->prox = list;
        list = new;
        l = l->prox;
    }

    return list;
}

/*---------------Exercicio 18-------------*/
int maximo(LInt l){

    int maior = 0;

    while(l){
        if(l->valor > maior)
            maior = l->valor;
        
        l = l->prox;
    }

    return maior;
}

/*---------------Exercicio 19-------------*/
int take (int n, LInt *l){

    int i = 0;
    for(;i < n && *l; i++, l = &((*l)->prox));
    if(!(*l)) return i;
    for(;*l;) {
        LInt temp = (*l)->prox;
        free(*l);
        *l = temp;
    }
    return n;
}

/*---------------Exercicio 20-------------*/
int drop (int n, LInt *l){

    int r = 0;
    while(*l && r < n){
        LInt tmp = *l;
        *l = (*l)->prox;
        free(tmp);
        r++;
    }

    return r;
}

/*---------------Exercicio 21-------------*/
LInt Nforward (LInt l, int N){

    for(int i = 0; i < N && l; i++){
        l = l->prox;
    }

    if(!l)
        return NULL;
    else
        return l;
    
}

/*---------------Exercicio 22-------------*/
int listToArray (LInt l, int v[], int N){
    int i;
    for(i = 0; i < N && l; i++){
        v[i] = l->valor;
        l = l->prox;
    }

    return i;
}

/*---------------Exercicio 23-------------*/
LInt arrayToList (int v[], int N){
    LInt *sitio, r = NULL;
    sitio = &r;

    for(int i = 0; i < N; i++){
        (*sitio) = malloc(sizeof(NLInt));
        (*sitio)->valor = v[i];
        sitio = &((*sitio)->prox);
    }

    *sitio = NULL;

    return r;
}

/*---------------Exercicio 24-------------*/
LInt somasAcL (LInt l){
    int sum = 0;
    LInt list = NULL, temp = NULL;
    for(;l; l = l->prox) {
        sum += l->valor;
        LInt new = malloc(sizeof(NLInt));
        new->valor = sum;
        new->prox = NULL;
        if(!list) list = temp = new;
        else temp = temp->prox = new;
    }
    return list;
}

/*---------------Exercicio 25-------------*/
void remreps (LInt l){

    while(l){
        LInt prevAux = (l), aux = (l)->prox;
        while(aux){
            if(aux->valor == (l)->valor) {
                prevAux->prox = aux->prox;
                free(aux);
            }
            else prevAux = aux;

            aux = prevAux->prox;
        }

        l = (l)->prox;
    }

}

/*---------------Exercicio 26-------------*/
/*---------------Exercicio 27-------------*/
/*---------------Exercicio 28-------------*/
/*---------------Exercicio 29-------------*/
/*---------------Exercicio 30-------------*/
/*---------------Exercicio 31-------------*/
/*---------------Exercicio 32-------------*/
/*---------------Exercicio 33-------------*/
/*---------------Exercicio 34-------------*/
/*---------------Exercicio 35-------------*/
/*---------------Exercicio 36-------------*/
/*---------------Exercicio 37------------*/
/*---------------Exercicio 38-------------*/
/*---------------Exercicio 39-------------*/
/*---------------Exercicio 40-------------*/
/*---------------Exercicio 41-------------*/
/*---------------Exercicio 42-------------*/
/*---------------Exercicio 43-------------*/
/*---------------Exercicio 44-------------*/
/*---------------Exercicio 45-------------*/
/*---------------Exercicio 46-------------*/
/*---------------Exercicio 47-------------*/
/*---------------Exercicio 48-------------*/
/*---------------Exercicio 49-------------*/
/*---------------Exercicio 50-------------*/
