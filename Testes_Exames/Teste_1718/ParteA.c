
#include "ParteA.h"

int retiraNeg (int v[], int N){

    int i = 0, j;

    while(i < N)
        if(v[i] < 0){
            for(j = i; j < (N-1); j++)
                v[j] = v[j+1];
            N--;    
        } else{

            i++;
        }


    return N;
}

int not_prev_to(char s[], int x, int y){

    int r = 1;

    for(int i = x; i < y && r; i++){
        if(s[i] == s[y])
            r = 0;
        
    }

    return r;

}

int difConsecutivos(char s[]){

    int r = 0;

    for(int i = 0; s[i]; i++){
        int isConseq = 0;
        for(int j = i; s[j]; j++)
            if(not_prev_to(s,i,j)) isConseq++;
            else break;

        if(isConseq > r ) r = isConseq;
    }

    return r;
}

int maximo(LInt l){

    int maior = 0;

    while(l){
        if(l->valor > maior)
            maior = l->valor;
        
        l = l->prox;
    }

    return maior;
}

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