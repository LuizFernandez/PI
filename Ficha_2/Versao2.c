
#include "Versao2.h"

float multIntV2 (int n, float m){

    float r = 0;

    while(n > 0){
        if(n%2 != 0)
            r += m;
        m *= 2;
        n /=2;
    }

    return r;
}

int mdcV2E1 (int a, int b){

    while(a != 0 && b != 0){

        if(a > b)
            a -= b;
        else if(a < b)
            b -= a;
        else return a;
    }

    if(a == 0) return b;
    else return a;
}

int mdcV2E2 (int a, int b){

    while(a != 0 && b != 0){

        if(a > b)
            a %= b;
        else if(a < b)
            b %= a;
        else return a;
    }

    if(a == 0) return b;
    else return a;
}

int fibV2 (int n){
    int tmp, acc1 = 1, acc2 = 1;

    for(int i = 2; i <= n; i++){
        tmp = acc2;
        acc2 += acc1;
        acc1 = tmp;
    }

    return acc2;
}