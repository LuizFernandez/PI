
#include "50Questoes_1.h"

int main(){

    int questao;
    printf("Inserir um numero de 1 a 50: ");
    scanf("%d", &questao);
    printf("\n-----------------------------------------------\n");

    switch (questao){
        case 1:
            scanBigger();
            break;
        case 2:
            scanMedia();
            break;
        case 3:
            scan2Bigger();
            break;
        case 4:{
            int num;
            printf("Inserir um numero para contar os bits a 1: ");
            scanf("%d", &num);
            int bits1 = bitsUm(num);
            printf("\nBits a um de %d: %d\n", num, bits1);
            break;
        }
        case 5:{
            int num;
            printf("Inserir um numero para contar os bits finais a 0: ");
            scanf("%d", &num);
            int bits0 = trailingZ(num);
            printf("\nBits finais a 0 de %d: %d\n", num, bits0);
            break;
        }
        case 6:{
            int num;
            printf("Inserir um numero com mais do que uma unidade: ");
            scanf("%d", &num);
            int digits = qDig(num);
            printf("\nNumero de digitos de %d: %d\n", num, digits);
            break;
        }
        case 7:{
            char s1[10] = "Amanha e ";
            char s2[10] = "Domingo!!";
            char *cat = mystrcat(s1,s2);
            printf("\nString s1 %s, String s2 %s, Cat das Strings: %s\n", s1, s2, cat);
            break;
        }
        case 8:{

        }
    }

    return 0;
}
