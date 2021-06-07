
#include "StringWork.h"
#include "ArrayWork.h"

int main(){

    //Exercicio 1
    char *s = strdup("Hello World!!");
    int nvogais = contaVogais(s);
    printf("Hello World tem %d vogais \n", nvogais);

    //Exercicio 2
    char *s2 = malloc(sizeof(char) * 50);
    strcpy(s2, "Estaa e umaa string coom duuuplicadoos");
    int remove = retiraVogais(s2);
    printf("Removidas %d vogais de %s\n", remove, s2);

    //Exercicio 3
    int add = duplicaVogais(s2);
    printf("Adicionadas %d vogais de %s\n", add, s2);

    //Exercicio 4
    int v[5] = {1,5,3,4,5};
    int ord = ordenado (v, 5);
    printf("Array s está %s\n", ord ? "Ordenado" : "Desordenado");

    //Exercicio 5
    int v1[5] = {1,3,5,7,9};
    int v2[5] = {2,4,6,8,10};
    int r[10];
    merge(v1, 5 , v2, 5, r);
    for(int i = 0; i < 10; i++)
        printf("%d ", r[i]);
    printf("\n");    

    //Exercicio 6
    int part[10] = {3,2,6,1,8,5,7,9,4,10};
    int menores = partition(part, 10, 4);
    for(int i = 0; i < 10; i++)
        printf("%d ", part[i]);
    printf("\n");  
    printf("No array part existem %d menores que 4\n", menores);

    return 0;
}