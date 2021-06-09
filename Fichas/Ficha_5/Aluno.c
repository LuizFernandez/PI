
#include "Aluno.h"
#include "ordena.h"
#include <string.h>

int nota (Aluno a){
    float s = 0.0;

    for (int i = 0; i < 6; i++)
        s += a.miniT[i]*10;

    if(s/6 < 8 || a.teste < 8)
        return 0;

    return (s/6) * 0.3 + a.teste * 0.7;    
}

int procuraNum (int num, Aluno t[], int N){

    int i;

    for (i = 0; i < N && t[i].numero < num; i++);

    if(t[i].numero == num) return i;
    else return -1;

}

void ordenaPorNum (Aluno t [], int N){
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < i; j++)
            if(t[j].numero > t[i].numero)
                swapA(t, i, j);
}

void criaIndPorNum (Aluno t [], int N, int ind[]){

    for(int i = 0; i < N; i++)
        ind[i] = i;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < i; j++)
            if(t[j].numero > t[i].numero){
                swapI(ind, i, j);
                swapA(t, i, j);
            }
}

void imprimeTurma (int ind[], Aluno t[], int N){

    ordenaPorNum(t,N);

    printf("Turma: \n");
    for(int i = 0; i < N; i++){
        printf("\tAluno: \n\t\tNome: %s;\n\t\tNumero: %d;\n", t[i].nome, t[i].numero);
        int notaA = nota(t[i]);
        printf("\t\tNota: %d\n", notaA);
    }
}

void criaIndPorNome (Aluno t [], int N, int ind[]){
    for(int i = 0; i < N; i++)
        ind[i] = i;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < i; j++)
            if(strcmp(t[j].nome,t[i].nome) > 0){
                swapI(ind, i, j);
                swapA(t, i, j);
            }
}

