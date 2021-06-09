
#include "ArrayWork.h"

void swap (int v[], int i, int j){
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

int ordenado (int v[], int N){
    int ord = 1;

    for(int i = 0; i < N && ord; i++)
        if(v[i] > v[i+1])
            ord = 0;

    return ord;        
}

void merge (int a[], int na, int b[], int nb, int r[]){

    int i, j, rlen = 0;

    for(i = 0, j = 0; i < na && j < nb;){
        if(a[i] <= b[j])
            r[rlen++] = a[i++];
        else
            r[rlen++] = b[j++];
    }

    if(i < na && j == nb)
        while(i < na)
            r[rlen++] = a[i++];
    else
        while(j < nb)
            r[rlen++] = b[j++];        
}

int partition (int v[], int N, int x){

    int menores = 0;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < i; j++)
            if(v[j] > v[i])
                swap(v, j, i);    

    for(int i = 0; i < N; i++)
        if(v[i] <= x)
            menores++;
            

    return menores;
}