
#include "Exercicio.h"

int main(){

    int v[10] = {1,1,1,2,4,5,3,5,8,0};
    int pares = paresImpares(v, 10);
    printf("Numero de pares: %d\n", pares);
    for(int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    int m[5][5];
    latino(5, m);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    

    
    return 0;
}