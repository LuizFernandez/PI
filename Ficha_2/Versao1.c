
#include "Versao1.h"

float multIntV1 (int n, float m){

    float r = 0;

    for(int i = 0; i < n; i++)
        r += m;

    return r;
}

int mdcV1 (int a, int b){

    int bigger, r = 0;

    if(a < b)
        bigger = b;
    else
        bigger = a;

    for(int i = 1; i < bigger; i++)
        if(a%i == 0 && b%i == 0) r = i;

    return r;
} 

int fibV1 (int n){

    if(n < 2) return 1;
    else return fibV1(n-2) + fibV1(n-1);

}