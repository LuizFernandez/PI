#ifndef QUESTOES_50_2
#define QUESTOES_50_2

#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
}NLInt, *LInt;

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
}NABin, *ABin;

int length (LInt l);
void freeL (LInt l);
void imprimeL (LInt l);
LInt reverseL (LInt l);
void insertOrd(LInt *l, int x);
int removeOneOrd (LInt *l, int x);
void merge (LInt *r, LInt l1, LInt l2);
void splitQS (LInt l, int x, LInt *mx, LInt *Mx);
LInt parteAmeio (LInt *l);
int removeAll (LInt *l, int x);
int removeDups (LInt *l);
int maior(LInt l);
int removeMaiorL (LInt *l);
void init (LInt *l);
void appendL (LInt *l, int x);
void concatL (LInt *a, LInt b);
LInt cloneL (LInt l);
LInt cloneRev (LInt l);
int maximo(LInt l);
int take (int n, LInt *l);
int drop (int n, LInt *l);
LInt Nforward (LInt l, int N);
int listToArray (LInt l, int v[], int N);
LInt arrayToList (int v[], int N);
LInt somasAcL (LInt l);
void remreps (LInt l);
LInt rotateL (LInt l);
LInt parte (LInt l);
int altura (ABin a);
ABin cloneAB (ABin a);
void mirror (ABin* a);
void inorder (ABin a, LInt *l);
void preorder(ABin a, LInt *l);
void posorder (ABin a, LInt *l);
int depth (ABin a, int x);
int freeAB (ABin a);
int pruneAB (ABin *a, int l);
int iguaisAB (ABin a, ABin b);
LInt nivelL (ABin a, int n);
int nivelV (ABin a, int n, int v[]);
int dumpAbin (ABin a, int v[], int N);
ABin somasAcA (ABin a);
int contaFolhas (ABin a);
ABin cloneMirror (ABin a);
int addOrd (ABin *a, int x);
int lookupAB (ABin a, int x);
int depthOrd (ABin a, int x);
int maiorAB (ABin a);
void removeMaiorA (ABin *a);
int quantosMaiores (ABin a, int x);
void listToBTree (LInt l, ABin *a);
int deProcura (ABin a);

#endif 