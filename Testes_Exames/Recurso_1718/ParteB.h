#ifndef PARTE_B
#define PARTE_B

#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    char *palavra;
    int comp;
    struct celula *prox;
}NPalavras, *Palavras;

int daPalavra (char *s, int *e);
void showPals(Palavras pal);
Palavras words (char *texto);

#endif