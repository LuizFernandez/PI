
#include "Parte_3.h"

int power (int base, int exp){
    int r = 1;
    for(int i = 0; i < exp; i++)
        r *= base;
    
    return r;
}

void P3exer_1(int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
            putchar('#');
        putchar('\n');    
    }

    printf("\n\n");
}

void P3exer_2(int size){

    for(int i = 0; i < size; i++){
        if(i%2 == 0)
            for(int j = 0; j < size; j++)
                if(j%2 == 0)
                    putchar('#');
                else
                    putchar('_');
        else 
            for(int j = 0; j < size; j++)
                if(j%2 != 0)
                    putchar('#');
                else
                    putchar('_');
        putchar('\n');            
    }

    printf("\n\n");
}

void P3exer_3V(int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j <= i; j++)
            putchar('#');
        putchar('\n');    
    }

    for(int i = (size-1); i > 0; i--){
        for(int j = 0; j < i; j++)
            putchar('#');
        putchar('\n'); 
    }

    printf("\n\n");
}

void P3exer_3H(int size){

    int moreChar = 1;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < (size - i - 1); j++)
            putchar(' ');
        for(int j = 0; j < moreChar; j++)
            putchar('#');
        putchar('\n');
        moreChar += 2;       
    }

    printf("\n\n");
}

void P3exer_4C(int n){
    for(int linha = 1; linha <= 2*n+1; linha++){
        for(int coluna = 1; coluna <= 2*n+1; coluna++){
            int soma = power(linha-n-1,2) + power(coluna-n-1,2);
            if(soma <= power(n,2))
                putchar('#');
            else
                putchar(' ');    
        }
        putchar('\n');
    }
    printf("\n\n");
}

