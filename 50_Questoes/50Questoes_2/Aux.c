
#include "Aux.h"

LInt getLInt(int len) {

    LInt r = NULL, *sitio;
    sitio = &r;
    for(int i = 0; i < len; i++){
        LInt new = malloc(sizeof(struct lligada));
        printf("Insere um valor: ");
        int num;
        scanf("%d",&num);
        new->valor = num;
        new->prox = NULL;
        *sitio = new;
        sitio = &((*sitio)->prox);
    }

    return r;
}

LInt getLIntCirc(int len) {
    LInt list = NULL;
    LInt prev = NULL;
    for(int i = 0; i < len; i++) {
        LInt new = malloc(sizeof(struct lligada));
        if(!list) list = new;
        if(prev) prev->prox = new;
        printf("Insere um valor: ");
        int num;
        scanf("%d",&num);
        new->valor = num;
        prev = new;
    }
    prev->prox = list;
    return list;
}

void printLInt(LInt l){
    while(l){
        printf("%d",l->valor);
        l = l->prox;
    }

    printf("\n");
}

ABin getBTree(){
    ABin new = malloc(sizeof(struct nodo));
    int num;
    printf("Valor central: ");
    scanf("%d",&num);
    new->valor = num;
    printf("(%d) Valor à esquerda? (0 - não ; 1 - sim) ", new->valor);
    scanf("%d",&num);
    if(num) new->esq = getBTree();
    else new->esq = NULL;
    printf("(%d) Valor à direita? (0 - não ; 1 - sim) ", new->valor);
    scanf("%d",&num);
    if(num) new->dir = getBTree();
    else new->dir = NULL;
    return new;
}