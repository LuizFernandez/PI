
#include "Aluno.h"

int main(){

    Aluno t[4] = {{4444, "Andr´e", {2,1,0,2,2,2}, 10.5}
                 ,{2222, "Zé", {2,2,2,1,0,0}, 14.5}
                 ,{7777, "Maria", {2,2,2,2,2,1}, 18.5}
                 ,{3333, "Paulo", {0,0,2,2,2,1}, 8.7}};
    
    int ind[4];

    //Exercicio 1 usada na imprimeTurma

    //Exercicio 2
    printf("Aluno com numero 7777 está na posição: %d\n", procuraNum(7777, t, 4));

    //Exercicio 3 Usada em criaIndPorNum

    //Exercicio 4
    int ind4[4];
    criaIndPorNum(t, 4, ind4);
    printf("Posições por numero!!\n");
    for(int i = 0; i < 4; i++)
        printf("%d ", ind4[i]);
    printf("\n");

    //Exercicio 5
    imprimeTurma(ind,t,4);  

    //Exercicio 7   
    int ind7[4];
    criaIndPorNome(t,4,ind7);
    printf("Posições por nome!!\n");
    for(int i = 0; i < 4; i++)
        printf("%d ", ind7[i]);
    printf("\n"); 
 
    
    return 0;             
}