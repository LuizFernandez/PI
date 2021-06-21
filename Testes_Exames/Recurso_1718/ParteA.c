
#include "ParteA.h"

char *mystrstr (char s1[], char s2[]){

    int isContained = 0;
    char *ans = s1;
    char *s2Start = s2;

    while(*s1 && *s2){
        if(*s1 != *s2){
            isContained = 0;
            s2 = s2Start;
        }
        if(*s1 == *s2){
            if(!isContained){
                isContained = 1;
                ans = s1;
            }
            s2++;
        }
        s1++;
    }
    if(isContained && !(*s2)) 
        return ans;
    else
        return NULL;
}

void removeIndex(char t[], int n){

    for(int i = n; t[i]; i++){
        t[i] = t[i+1];
    }
}

void truncW (char t[], int n){

    int aux = 0, i = 0;

    while(t[i]){
        if(t[i] == ' '){
            i++;
            aux = 0;
        } else if(aux == n){
            removeIndex(t,i);
        } else {
            aux++;
            i++;
        }
    }
}

float dist(Posicao p, Posicao ps){

    float xs = pow(p.x - ps.x,2);
    float ys = pow(p.y - ps.y,2);

    return sqrt(xs + ys);
}

int maisCentral (Posicao pos[], int N){

    int indice = 0;
    Posicao pinicial;
    pinicial.x = 0;
    pinicial.y = 0;
    float distancia = dist(pinicial,pos[0]);

    for(int i = 0; i < N; i++){
        if(dist(pinicial, pos[i]) < distancia){
            distancia = dist(pinicial,pos[i]);
            indice = i;
        }
    }

    return indice;

}

LInt somasAcL (LInt l){

    int soma = 0;
    LInt list = NULL, temp = NULL;

    while(l){
        soma += l->valor;
        LInt new = malloc(sizeof(NLInt));
        new->valor = soma;
        new->prox = NULL;
        if(!list) list = temp = new;
        else temp = temp->prox = new;
        l = l->prox;
    }

    return list;
}

int addOrd (ABin *a, int x) {

    int r = 0;

    while(*a && !r){
        if((*a)->valor == x)
            r = 1;
        else if((*a) -> valor > x){
            a = &((*a)->esq);
        } else if((*a)->valor < x){
            a = &((*a)->dir);
        }
    }
    if(!r){
        ABin new = malloc(sizeof(NABin));
        new->valor = x;
        new->dir = new->esq = NULL;
        *a = new;
    }

    return r;
}