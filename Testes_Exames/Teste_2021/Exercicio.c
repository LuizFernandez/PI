
#include "Exercicio.h"

/*----------Exercicio 1----------*/
int sumhtpo (int n) {
    int r = 0;
    while (n != 1) {
        r += n;
        if (n%2 == 0) n = n/2;
        else n = 1+(3*n);
    }
    return r;
}

/*----------Exercicio 2----------*/
int moda(int v[], int N, int *m){
    int r = 0;
    if(N != 0){
        int maxfreq = v[0], secFrec = 0; 
        for(int i = 0; i < N; i++){
            int freq = 1;
            for(int j = (i+1); j < N; j++)
                if(v[i] == v[j])
                    freq++;
            if(freq > r){
                secFrec = r;
                r = freq;
                maxfreq = v[i];
            } else if(freq > secFrec)
                secFrec = freq;
        }
        if(secFrec == r){
            r = 0;
            *m = NULL;
        }else
            *m = maxfreq;
    }

    return r;
}

int procura (LInt *l, int x){

    int r = 0;
    LInt ant = NULL, aux = *l;

    while(aux && !r){
        if(aux->valor == x){
            LInt tmp = aux;
            ant->prox = aux->prox;
            tmp->prox = *l;
            r = 1;
        } else{
            ant = aux;
            aux = aux->prox;
        }
    }

    return r;
}

int freeAB(ABin a){
    int r = 0;

    if(a){
        r += freeAB(a->dir);
        r += freeAB(a->esq);
        free(a);
        r++;
    }

    return r;
}

void insert(char** direcoes, char* direcao, int length){
    for(int i = length; i > 0; i--){
        direcoes[i] = direcoes[i-1];
    }

    direcoes[0] = direcao;
}

void caminho(ABin a){
    int x = a->valor;
    int lenght = 0;
    char** direc = malloc(sizeof(char*) * 50);

    while(a->pai){
        if(a->dir->valor == x){
            insert(direc, "dir", lenght);
            lenght++;
        } else if(a->esq->valor == x){
            insert(direc, "esq", lenght);
            lenght++;
        }
        a = a->pai;
    }

    for(int i = 0; i < lenght; i++){
      printf("%s", direc[i]);
      free(direc[i]);
    }

    free(direc);
}