
#include "ABin.h"

ABin newABin (int r, ABin e, ABin d) {
    ABin a = malloc (sizeof(struct nodo));
    if (a!=NULL) {
        a->valor = r; 
        a->esq = e; 
        a->dir = d;
    }
    return a;
}

ABin RandArvFromArray (int v[], int N) {
   ABin a = NULL;
    int m;
    if (N > 0){
    	m = rand() % N;
    	a = newABin (v[m], RandArvFromArray (v,m), RandArvFromArray (v+m+1,N-m-1));
    }
    return a;	
}

void dumpABin(ABin a, int N){
    if(a){
        dumpABin(a->esq, N);
        printf("%d ", a->valor);
        dumpABin(a->dir, N);
    }
}

void freeABin(ABin a){
    if(a){
        freeABin(a->dir);
        freeABin(a->esq);
        free(a);
    }
}

int altura (ABin a){
    int r = 0;

    if(a){
        r++;
        int rd = altura(a->dir);
        int re = altura(a->esq);
        if(rd > re) 
            r += rd;
        else
            r += re;
    }

    return r;

}

int nFolhas (ABin a){

    int r = 0;

    if(a){
        if(!a->dir && !a->esq) r++;
        else{
            int rd = nFolhas(a->dir);
            int re = nFolhas(a->esq);
            r += rd;
            r += re;
        }
    }

    return r;
}

ABin maisEsquerda (ABin a){

    while(a->esq)
        a = a->esq;
    
    return a;
}

void imprimeNivel (ABin a, int l){

    if(a){
        if(l == 0)
            printf("%d ", a->valor);
        else{
            imprimeNivel(a->esq, l-1);
            imprimeNivel(a->dir, l-1);
        }
    }

}

int procuraE (ABin a, int x){

    int r = 0;

    if(a)
        r = (a->valor == x) || procuraE(a->dir, x) || procuraE(a->esq, x);

    return r;
   
}

ABin procura (ABin a, int x){

    if(!a) return NULL;

    if(a->valor == x)
        return a;
    else if( x > a->valor)
        return procura(a->dir, x);
    else 
        return procura(a->esq, x);

}

int nivel (ABin a, int x){

    int r = 0;

    if(!a) return -1;

    if(a->valor == x) 
        return r++;
    else if( x > a->valor)
        return r += nivel(a->dir, x);
    else 
        return r += nivel(a->esq, x);

}

void imprimeAte (ABin a, int x){

    if(a){
        if(a->valor == x)
            printf("%d ", a->valor);
        else if(a->valor > x){
            imprimeAte(a->esq, x);
        }else{
            imprimeAte(a->esq, x);
            printf("%d ", a->valor);
            imprimeAte(a->dir, x);
        }
    }
}