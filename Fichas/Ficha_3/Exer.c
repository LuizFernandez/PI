
#include "Exer.h"

void exer_1A(){

    int x [15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11, 12, 13, 14, 15};
    int *y, *z, i;
    y = x;
    z = x+3;
    for (i=0; i<5; i++) {
        printf ("%d %d %d\n", x[i], *y, *z);
        y = y+1; z = z+2;
    }

}

/** x = 1; y = 1; z = 4;
 *  x = 2; y = 2; z = 6;
 *  x = 3; y = 3; z = 8;
 *  x = 4; y = 4; z = 10;
 *  x = 5; y = 5; z = 12;
 */ 

void exer_1B(){
    int i, j, *a, *b;
    i=3; j=5;
    a = b = 42;
    a = &i; b = &j;
    i++;
    j = i + *b;
    b = a;
    j = j + *b;
    printf ("%d\n", j);
}

/** i = 3; j = 5;
 *  a = 3; b = 5;
 *  i = 4; a = 4;
 *  j = 9; b = 9;
 *  b = 4;
 *  j = 13;
 */ 

void swapM (int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void swap (int v[], int i, int j){
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

int soma (int v[], int N){
    int r = 0;

    for(int i = 0; i < N; i++)
        r += v[i];

    return r;    
}

void inverteArrayV1 (int v[], int N){
    for(int i = 0, j = (N-1); i != j; i++, j--)
        swap (v, i, j);
}

void inverteArrayV2 (int v[], int N){
    for(int i = 0, j = (N-1); i != j; i++, j--)
        swapM (&(v[i]), &(v[j]));
}

int maximum (int v[], int N, int *m){
    if(N <= 0)
        return 1;

    int maux = 0;
    
    for(int i = 0; i < N; i++)
        if(maux < v[i])
            maux = v[i];

    *m = maux;
    return 0;        
}

void quadrados (int q[], int N){

    q[0] = 0;
    for(int i = 0; i < (N-1); i++)
        q[(i+1)] = q[i] + (2*i+1);

}

void pascalV1 (int v[], int N){
    if(N == 1) v[0] = 1;
    else{
        int prevLine[N-1];
        pascalV1(prevLine, N-1);
        v[0] = 1;
        v[(N-1)] = 1;
        for(int i = 1; i < (N-1); i++)
            v[i] = prevLine[(i-1)] + prevLine[i];
    }
}

void pascalV2 (int v[], int N){
    if(N == 1){ 
        v[0] = 1;
        printf("%d \n", v[0]);
    }
    else{
        int prevLine[N-1];
        pascalV2(prevLine, N-1);
        v[0] = 1;
        v[(N-1)] = 1;
        for(int i = 1; i < (N-1); i++)
            v[i] = prevLine[(i-1)] + prevLine[i];
        for(int i = 0; i < N; i++)
            printf("%d ",v[i]);
        printf("\n");
    }
}
