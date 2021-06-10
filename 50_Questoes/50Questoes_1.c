
#include "50Questoes_1.h"

/*---------------Exercicio 1---------------*/
void scanBigger(){

    int aux, max = 0;
    scanf("%d", &aux);
    while(aux != 0){
        if(aux > max)
            max = aux;
        scanf("%d", &aux);
    }

    printf("Maior elemento: %d\n", max);
}

/*---------------Exercicio 2---------------*/
void scanMedia(){

    float soma = 0;
    int n = 0, elem;
    scanf("%d", &elem);
    while(elem != 0){
        soma += elem;
        n++;
        scanf("%d", &elem);
    }

    float media;
    if(n == 0)
        media = 0;
    else
        media = soma/n;

    printf("Media dos elementos: %.5f\n", media);

}

/*---------------Exercicio 3---------------*/
void scan2Bigger(){
    int aux, max, secMax = 0;
    scanf("%d", &aux);
    max = aux;
    while(aux != 0){
        if(aux > max){
            secMax = max;
            max = aux;
        } else if(aux > secMax)
            secMax = aux;
        scanf("%d", &aux);
    }

    printf("Segundo maior elemento: %d\n", secMax);
}

/*---------------Exercicio 4---------------*/
int bitsUm (unsigned int n){

    int r = 0;
    while(n > 0){
        r += (n%2);
        n /= 2;
    }

    return r;
}

/*---------------Exercicio 5---------------*/
int trailingZ (unsigned int n){

    if(n%2) return 0;
    else return 1 + trailingZ(n >> 1);

}

/*---------------Exercicio 6---------------*/
int qDig (unsigned int n){

    int r = 0;
    while(n > 0){
        n /= 10;
        r++;
    }

    return r;
}

/*---------------Exercicio 7---------------*/
char *mystrcat (char s1[], char s2[]){

    char *cat = s1;

    while(*s1) s1++;
    while((*s1 = *s2)){
        s1++;
        s2++;
    }

    *s1='\0';

    return cat;

}

/*---------------Exercicio 8---------------*/
char *mystrcpy (char *dest, char source[]){

    char* result = dest;

    while((*dest = *source)) {
        source++;
        dest++;
    }

    return result;
}

/*---------------Exercicio 9---------------*/
int mystrcmp (char s1[], char s2[]){

    int r;
    while(*s1 && *s2 && *s1 == *s2){
        s1++;
        s2++;
    }

    if(*s1 > *s2 || *s1 < *s2)
        r = *s1 - *s2;
    else 
        r = 0;

    return r;

}

/*---------------Exercicio 10--------------*/
char *mystrstr (char s1[], char s2[]){


    int isContained = 1;
    char *ans = s1;
    char *s2Start = s2;

    while(*s1 && *s2){
        if(*s1 != *s2){
            isContained = 0;
            s2 = s2Start;
        }
        if(*s1 == *s2){
            if(!isContained){
                isContained = 1;
                ans = s1;
            }
            s2++;
        }

        s1++;
    }

    if(isContained && !(*s2)) return ans;
    else return NULL;

}

/*---------------Exercicio 11--------------*/
void mystrrev (char s[]){

    int len,i;
    for(len = 0; s[len]; len++)
        ;
    char rev[len];
    for(i = 0; i < len; i++)
        rev[i] = s[len-i-1];
    
    for(i = 0; i < len; i++)
        s[i] = rev[i];
}