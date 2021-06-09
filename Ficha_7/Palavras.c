
#include "Palavras.h"
#include <stdlib.h>
#include <string.h>

Palavras criaPalavra(char* pal, int ocorr){
    Palavras p = malloc(sizeof(Palavra));
    p->palavra = strdup(pal);
    p->ocorr = ocorr;
    p->prox = NULL;

    return p;
}

void libertaLista(Palavras p){

    if(p){
        libertaLista(p->prox);
        free(p);
    }

}

int quantasP (Palavras l){
    int r = 0;

    while(l){
        r++;
        l = l->prox;
    }

    return r;
}

void listaPal (Palavras l){
    while(l){
        printf("%s -- %d\n", l->palavra, l->ocorr);
        l = l->prox;
    }
}

char * ultima (Palavras l){
    while(l->prox != NULL)
        l = l->prox;

    return l->palavra;
}

Palavras acrescentaInicio (Palavras l, char *p){
    Palavras pal = criaPalavra(p, 1);
    pal->prox = l;

    return pal;
}

Palavras acrescentaFim (Palavras l, char *p){

    Palavras *sitio;
    sitio = &l;

    while((*sitio) != NULL)
        sitio = &((*sitio)->prox);

    Palavras pal = criaPalavra(p, 1); 

    *sitio = pal;

    return l;
}

Palavras acrescenta (Palavras l, char *p){
    if(l == NULL) l = acrescentaInicio(l,p);
    else if(strcmp(l->palavra, p) == 0)
        l->ocorr++;
    else if(strcmp(l->palavra, p) > 0)
        l = acrescentaInicio(l,p);
    else l->prox = acrescenta(l->prox,p);

    return l;
}

Palavras maisFreq (Palavras l){

    int ocorr = 0;
    Palavras pal;

    while(l){
        if(l->ocorr > ocorr){
            ocorr = l->ocorr;
            pal = l;
        }
        l = l->prox;
    }

    return pal;
}