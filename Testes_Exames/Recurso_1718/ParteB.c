
#include "ParteB.h"

int daPalavra (char *s, int *e){

    if((*s) == "") return  0;

    int r = 0,i = 0;
    int space = 0;

    while(s[i] == ' '){
        space++;
        i++;
    }

    while(s[i] != ' ' && s[i]){
        r++;
        i++;
    }

    *e = space;

    return r;
}
void showPals(Palavras pal){

    while(pal){
        printf("Palavra ");
        for(int i = 0; i < pal->comp; i++)
            printf("%c", pal->palavra[i]);
        printf(" tem como comprimento %d\n", pal->comp);
        pal = pal->prox;
    }
}

Palavras words (char *texto){

    int space;
    int comp;
    Palavras pal = malloc(sizeof(NPalavras));
    if(texto){
        comp = daPalavra(texto, &space);
        
        pal->palavra = texto + space;
        pal->comp = comp;
        if(comp != 0)
            pal->prox = words(texto + space + comp);
    } else
        return NULL;

    return pal;

}

Palavras daLinha (Palavras t, int n){
    
    int len = 0;
    Palavras rest = t, *sitio;
    sitio = &t;

    for(; len < n && rest; rest = rest->prox){
        len += t->comp +1;
        if(len > n) break;
        sitio = &((*sitio)->prox);
    }
    rest = rest->prox;
    (*sitio)->prox = NULL;
    return rest;
}

int tamLinha(Palavras p, int* numP) {
    int len = 0;
    (*numP) = 0;
    while(p) {
        len += p->comp;
        if(p->prox) len++;
        (*numP)++;
        p = p->prox;
    }
    return len;
}

void escreveLinha (Palavras p, int n) {
    int numP;
    int len = tamLinha(p,&numP);
    if(numP == 1) printf("%s\n",p->palavra);
    else {
        int espacos = n - len;
        while(p) {
            for(int i = 0; i < p->comp; i++) putchar(p->palavra[i]);
            numP--;
            if(p->prox) {
                putchar(' ');
                for(;(espacos/numP) > 0; espacos--) putchar(' ');
            }
            p = p->prox;
        }
    }
    printf("\n");
}

void formata (char texto[], int largura) {
    Palavras pals = words(texto);
    Palavras resto;
    while(resto = daLinha(pals,largura)){
        escreveLinha(pals, largura);
        pals = resto;
    }
    escreveLinha(pals,largura);
}