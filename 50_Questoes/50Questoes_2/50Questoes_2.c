
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
LInt rotateL (LInt l){

    if(!l || !l->prox) return l;

    LInt tmp = l, *sitio;
    sitio = &l;
    *sitio = (*sitio)->prox;

    while(*sitio)
        sitio = &((*sitio)->prox);
    
    *sitio = tmp;
    (*sitio)->prox = NULL;

    return l;
}

/*---------------Exercicio 27-------------*/
LInt parte (LInt l){

    if(!l || !l->prox) return NULL;

    LInt new = l->prox;
    l->prox = l->prox->prox;
    new->prox = parte(l->prox);

    return new;
}

/*---------------Exercicio 28-------------*/
int altura (ABin a){
    
    if(!a) return 0;

    int r = 1;
    int esq = altura(a->esq);
    int dir = altura(a->dir);

    if(esq > dir)
        r += esq;
    else
        r += dir;
    
    return r;
}

/*---------------Exercicio 29-------------*/
ABin cloneAB (ABin a){

    if(!a) return NULL;

    ABin r = malloc(sizeof(NABin));

    r->valor = a->valor;
    r->esq = cloneAB(a->esq);
    r->dir = cloneAB(a->dir);

    return r;
}

/*---------------Exercicio 30-------------*/
void mirror (ABin* a){

    if(!(*a)) return ;

    ABin tmp = (*a)->dir;
    (*a)->dir = (*a)->esq;
    (*a)->esq = tmp;

    mirror(&((*a)->esq));
    mirror(&((*a)->dir));

}

/*---------------Exercicio 31-------------*/
void inorder (ABin a, LInt *l){

    if(!a) return;

    inorder(a->dir,l);
    LInt nodo = malloc(sizeof(NLInt));
    nodo->valor = a->valor;
    nodo->prox = *l;
    inorder(a->esq, &nodo);

    *l = nodo;
 
}

/*---------------Exercicio 32-------------*/
void preorderAux (ABin a, LInt * l) {
    if(!a) return;

    preorderAux(a->dir,l);
    preorderAux(a->esq,l);
    LInt nodo = malloc(sizeof(NLInt));
    nodo->valor = a->valor;
    nodo->prox = *l;

    *l = nodo;
}

void preorder(ABin a, LInt *l){
    *l = NULL;
    preorderAux(a,l);
}

/*---------------Exercicio 33-------------*/
void posorderAux(ABin a, LInt *l){

    if(!a) return;

    LInt nodo = malloc(sizeof(NLInt));
    nodo->valor = a->valor;
    nodo->prox = *l;
    *l = nodo;
    posorderAux(a->dir, l);
    posorderAux(a->esq, l);

}

void posorder (ABin a, LInt *l){
    *l = NULL;
    posorderAux(a,l);
}

/*---------------Exercicio 34-------------*/
int depth (ABin a, int x){

    if(!a) return -1;

    int r = 0;

    if(a->valor != x){
        r++;
        int esq = depth(a->esq,x);
        int dir = depth(a->dir,x);
        if(esq == -1 && dir == -1)
            r = -1;
        else if(esq == -1)
            r += dir;
        else if(dir == -1)
            r += esq;
        else if(dir < esq)
            r += dir;
        else
            r += esq;
    } else r = 1;

    return r;
}

/*---------------Exercicio 35-------------*/
int freeAB (ABin a){

    int r;

    if(!a) r = 0;
    else {
        r = 1;
        int esq = freeAB(a->esq);
        int dir = freeAB(a->dir);
        free(a);
        r += esq;
        r += dir;
    }

    return r;
    
}

/*---------------Exercicio 36-------------*/
int pruneAB (ABin *a, int l){
    int n = 0;

    if(*a){
        if(l == 0) {
            n = 1;
            n += pruneAB(&((*a)->esq),0);
            n += pruneAB(&((*a)->dir),0);
            free(*a);
            (*a) = NULL;
        } else{ 
            n += pruneAB(&((*a)->esq),l - 1);
            n += pruneAB(&((*a)->dir),l - 1);
        }
    }
    
    return n;
}

/*---------------Exercicio 37-------------*/
int iguaisAB (ABin a, ABin b){

    int n;
    
    if((!a && b) || (a && !b))
        n = 0;
    else if(!a && !b) 
         n = 1;
    else {
        if(a->valor != b->valor)
            n = 0;
        else{
            n = iguaisAB(a->dir, b->dir) && iguaisAB(a->esq, b->esq);
        }
    }
    
    return n;
}

/*---------------Exercicio 38-------------*/
LInt concat (LInt a, LInt b){

    LInt r = a, *sitio;
    sitio = &r;

    while(*sitio)
        sitio = &((*sitio)->prox);
    
    *sitio = b;

    return r;

}

LInt nivelL (ABin a, int n){

    LInt list;
    
    if(!a || n < 0) list = NULL;

    else if(n == 1){
        list = malloc(sizeof(NLInt));
        list->valor = a->valor;
        list->prox = NULL;
    }else{
        LInt esq = nivelL(a->esq, (n-1));
        LInt dir = nivelL(a->dir, (n-1));

        list = concat(esq,dir);
    }

    return list;
}

/*---------------Exercicio 39-------------*/
int nivelV (ABin a, int n, int v[]){
    if(!a || n < 0) return 0;

    if(n == 1){
        *v = a->valor;
        return 1;
    }else{
        int e = nivelV(a->esq, n-1, v);
        int d = nivelV(a->dir, n-1, v + e);
        return e+d;
    }

}

/*---------------Exercicio 40-------------*/
int dumpAbin (ABin a, int v[], int N){

    if(!a || N < 0) return 0;

    int d = dumpAbin(a->dir, v, N);
    if(d < N){
        v[d++] = a->valor;
        return d + dumpAbin(a->esq, v+d, (N-d));
    } else 
        return N;

}

/*---------------Exercicio 41-------------*/
ABin somasAcA (ABin a){

    if(!a) return NULL;

    int acc = a->valor;

    ABin r = malloc(sizeof(NABin));
    r->dir = somasAcA(a->dir);
    r->esq = somasAcA(a->esq);
    r->valor = a->valor + (r->dir ? r->dir->valor : 0) + (r->esq ? r->esq->valor : 0);

    return r;

}

/*---------------Exercicio 42-------------*/
int contaFolhas (ABin a){
    if(!a) return 0;

    int e, d, r = 0;

    if(a->dir == NULL && a->esq == NULL)
        r = 1;
    else{
        e = contaFolhas(a->esq);
        d = contaFolhas(a->dir);
        r = e + d;
    }

    return r;
}

/*---------------Exercicio 43-------------*/
ABin cloneMirror (ABin a){

    if(!a) return NULL;

    ABin r = malloc(sizeof(NABin));
    r->valor = a->valor;
    r->esq = cloneMirror(a->dir);
    r->dir = cloneMirror(a->esq);

    return r;
}

/*---------------Exercicio 44-------------*/
int addOrd (ABin *a, int x){

    ABin nodo = malloc(sizeof(NABin));
    nodo->valor = x;
    nodo->dir = nodo->esq = NULL;

    while(*a){
        if((*a)->valor == x)
            return 1;
        else if((*a)->valor > x)
            a = &((*a)->esq);
        else 
            a = &((*a)->dir);
    }

    if(!(*a)) *a = nodo;

    return 0;
}

/*---------------Exercicio 45-------------*/
int lookupAB (ABin a, int x) {

    int r = 0;

    while(a && !r){
        if(a->valor == x)
            r = 1;
        else if(a->valor > x)
            a = a->esq;
        else
            a = a->dir;

    }

    return r;
}

/*---------------Exercicio 46-------------*/
int depthOrd (ABin a, int x){

    int r = 1;

    while(a && a->valor != x){
        if(a->valor <= x)
            a = a->dir;
        else if(a->valor > x)
            a = a->esq;
        r++;
    }

    if(!a) r = -1;

    return r;
}

/*---------------Exercicio 47-------------*/
int maiorAB (ABin a){

    while(a->dir)
        a = a->dir;
    
    return a->valor;
}

/*---------------Exercicio 48-------------*/
void removeMaiorA (ABin *a){

    while((*a)->dir)
        a = &((*a)->dir);
    
    if((*a)->esq){
        ABin tmp = *a;
        *a = (*a)->esq;
        free(tmp);
    } else {
        ABin tmp = *a;
        *a = NULL;
        free(tmp);
    }

}

/*---------------Exercicio 49-------------*/
int quantosMaiores (ABin a, int x){

    if(!a) return 0;

    if(a->valor <= x)
        return quantosMaiores(a->dir, x);
    else if(a->valor > x)
        return 1 + quantosMaiores(a->esq, x) + quantosMaiores(a->dir, x);

}

/*---------------Exercicio 50-------------*/
void listToBTree (LInt l, ABin *a){

    if(!l) (*a) = NULL;
    else{
    
        LInt aux = parteAmeio(&l);

        (*a) = malloc(sizeof(NABin));
        (*a)->valor = l->valor;
        listToBTree(l->prox, &((*a)->dir));
        listToBTree(aux, &((*a)->esq));
    }
}

/*---------------Exercicio 51-------------*/
int deProcuraAux(ABin a, int x, int maior) {
    if(!a) return 1;

    if((maior && a->valor < x) || (!maior && a->valor > x))
        return 0;

    return deProcuraAux(a->esq,x,maior) && deProcuraAux(a->dir,x,maior);
}

int deProcura (ABin a) {
    if(!a) return 1;

    int b = deProcuraAux(a->esq,a->valor, 0) && deProcura(a->esq);
    int c = deProcuraAux(a->dir,a->valor, 1) && deProcura(a->dir);

    return b && c;
}