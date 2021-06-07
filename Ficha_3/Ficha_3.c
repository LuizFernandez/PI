
#include "Exer.h"

int main () {

    //Exercicio 1
    exer_1A();
    exer_1B();

    //Exercicio 2
    int x = 3, y = 5;
    swapM (&x, &y);
    printf ("%d %d\n", x, y);

    //Exercicio 3
    int v1[5] = { 2, 4, 6, 8, 10};
    swap(v1, 2, 4);
    for(int i = 0; i < 5; i++)
        printf("%d ", v1[i]);
    printf("\n");
    swap(v1, 2, 4);

    //Exercicio 4
    int total = soma(v1, 5);
    printf("Soma: %d\n", total);

    //Exercicio 5
    inverteArrayV1(v1,5);
    for(int i = 0; i < 5; i++)
        printf("%d ", v1[i]);
    printf("\n");
    inverteArrayV2(v1,5);
    for(int i = 0; i < 5; i++)
        printf("%d ", v1[i]);
    printf("\n"); 

    //Exercicio 6
    int v2[5] = { 2, 5, 13, 6, 1};
    int max;
    int work = maximum(v2, 5, &max);
    printf("Max de v2: %d\n", max);

    //Exercicio 7
    int q[10];
    quadrados(q, 10);
    for(int i = 0; i < 10; i++)
        printf("%d ",q[i]);
    printf("\n");


    //Exercicio 8
    int pascalV[5];
    pascalV1(pascalV, 5);
    for(int i = 0; i < 5; i++)
        printf("%d ",pascalV[i]);
    printf("\n");
    
    pascalV2(pascalV, 5);
    return 0;
}