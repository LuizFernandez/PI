
#include "Parte_3.h"

void P3exer_1(int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
            putchar('#');
        putchar('\n');    
    }

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

}

