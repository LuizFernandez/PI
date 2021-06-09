
#include "Versao1.h"
#include "Versao2.h"

int main(){

    //Exercicio 1
    float v1mul = multIntV1(7,3);
    printf("V1: 3.5 * 2 = %f\n", v1mul);

    float v2mul = multIntV2(7,3);
    printf("V2: 3.5 * 2 = %f\n", v2mul);

    //Exercicio 3

    int minDivV1 = mdcV1(18,10);
    printf("V1: mdc entre 18 e 10 = %d\n", minDivV1);

    int minDivV2E1 = mdcV2E1(18,10);
    printf("V2 Euclides 1: mdc entre 18 e 10 = %d\n", minDivV2E1);

    int minDivV2E2 = mdcV2E2(18,10);
    printf("V2 Euclides 2: mdc entre 18 e 10 = %d\n", minDivV2E2);

    //Exercicio 6

    int fiboV1 = fibV1(7);
    printf("V1: Fibonacci de 7 = %d\n", fiboV1);

    int fiboV2 = fibV2(7);
    printf("V2: Fibonacci de 7 = %d\n", fiboV2);

    return 0;
}