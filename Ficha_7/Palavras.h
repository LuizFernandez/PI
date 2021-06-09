#ifndef PALAVRAS
#define PALAVRAS

#include <stdio.h>

typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula * prox;
}Palavra, * Palavras;

void libertaLista(Palavras p);
int quantasP (Palavras l);
void listaPal (Palavras l);
char * ultima (Palavras l);
Palavras acrescentaInicio (Palavras l, char *p);
Palavras acrescentaFim (Palavras l, char *p);
Palavras acrescenta (Palavras l, char *p);
Palavras maisFreq (Palavras l);
#endif