
#include "ParteB.h"

int minheapOK (ABin a) {
    if(!a) return 1;
    int l = a->esq ? minheapOK(a->esq) && a->valor < a->esq->valor : 1;
    int r = a->dir ? minheapOK(a->dir) && a->valor < a->dir->valor : 1;
    return l && r;
}


int max(int a, int b) {return a > b ? a : b; }

int maxHeap (ABin a) {
    int l = a->esq ? maxHeap(a->esq) : a->valor;
    int r = a->dir ? maxHeap(a->dir) : a->valor;
    return max(l,r);
}

void removeMin (ABin *a) {
    if(!(*a)->esq) {
        ABin temp = (*a);
        (*a) = temp->dir;
        free(temp);
    }
    else if(!(*a)->dir) {
        ABin temp = (*a);
        (*a) = temp->esq;
        free(temp);
    }
    else if((*a)->esq->valor < (*a)->dir->valor) {
        (*a)->valor = (*a)->esq->valor;
        removeMin(&((*a)->esq));
    }
    else {
        (*a)->valor = (*a)->dir->valor;
        removeMin(&((*a)->dir));
    }
}

void add (ABin *a, int x) { //Fds, que função grande 😂 Já percebi porque é que não nos pedem para a definir no teste.
    ABin newTree = malloc(sizeof(struct nodo));
    newTree->valor = x;
    newTree->esq = newTree->dir = NULL;
    if(!(*a)) (*a) = newTree;
    else {
        if(!(*a)->esq) {
            if(x > (*a)->valor) add(&((*a)->esq),x);
            else {
                newTree->esq = (*a);
                newTree->dir = (*a)->dir;
                (*a)->dir = NULL;
                (*a) = newTree;
            }
        }
        else if(!(*a)->dir) {
            if(x > (*a)->valor) add(&((*a)->dir),x);
            else {
                newTree->esq = (*a)->esq;
                (*a)->esq = NULL;
                newTree->dir = (*a);
                (*a) = newTree;
            }
        }
        else {
            if(x > (*a)->dir->valor) add(&((*a)->dir),x);
            else if(x > (*a)->esq->valor) add(&((*a)->esq),x);
            else {
                ABin newTree = malloc(sizeof(struct nodo));
                newTree->valor = x;
                if(x < (*a)->valor) {
                    newTree->esq = (*a);
                    (*a) = newTree;
                }
                else {
                    newTree->esq = (*a)->esq;
                    (*a)->esq = newTree;
                }
                newTree->dir = NULL;
            }
        }
    }
}

void heapSort (int v[], int N) {
    ABin *tree = malloc(sizeof(ABin));
    *tree = NULL;
    for(int i = 0; i < N; i++) add(tree,v[i]);
    for(int i = 0; i < N; i++) {
        v[i] = (*tree)->valor;
        removeMin(tree);
    }
}

int kMaior (int v[], int N, int k) {
    ABin tree = NULL;
    for(int i = 0; i < N; i++) {
        if(i < k) add(&tree,v[i]);
        else {
            if(v[i] > tree->valor) {
                add(&tree,v[i]);
                removeMin(&tree);
            }
        }
    }
    return tree->valor;
}