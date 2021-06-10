
#include "50Questoes_1.h"

int main(){

    int questao;
    printf("Inserir um numero de 1 a 50: ");
    scanf("%d", &questao);
    printf("-----------------------------------------------\n");

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
            char source[15] = "Batata mista";
            char *dest;
            char *cpy = mystrcpy(dest,source);
            printf("%s [ORIGINAL] - address %p\n",source,source);
            printf("%s [COPIADA] - address %p\n",dest,dest);
            break;
        }
        case 9:{
            char *s1 = "Thomas Kahl é lindo";
            char *s2 = "Thomas ensina a nadar";
            int num = mystrcmp(s1,s2);
            printf("Resultado: %d\n", num);
            break;
        }
        case 10:{
            char* s1 = "Hello World";
            char* s2 = "World";
            char* ans = mystrstr(s1,s2);
            printf("%s\n",ans);
            break;
        }
        case 11:{
            char* s1 = strdup("Nichiri");
            mystrrev(s1);
            printf("%s\n",s1);
            break;
        }
        case 12:{
            char* s1 = strdup("Nichiri");
            strnoV(s1);
            printf("%s\n",s1);
            break;
        }
        case 13:{
            char* s1 = strdup("liberdade, igualdade e fraternidade");
            truncW(s1, 4);
            printf("%s\n", s1);
            break;
        }
        case 14:{
            char* s = strdup("Ensaio da Cegueira");
            char c = charMaisfreq(s);
            printf("Caracter mais frequente de %s é: %c\n", s, c);
            break;
        }
        case 15:{
            char* s = strdup("aabbbaaaaaccccccd");
            int rep = iguaisConsecutivos(s);
            printf("String mais longa de char repetidos: %d\n", rep);
            break;
        }
        case 16:{
            char* s = strdup("adascdeaaaaafdccccccpasodisfdnfu");
            int notrep = difConsecutivos(s);
            printf("String mais longa de char diferentes: %d\n", notrep);
            break;
        }
        case 17:{
            char* s1 = "Flint and Stell";
            char* s2 = "Flint and Hammer";
            int prefixo = maiorPrefixo(s1,s2);
            printf("Tamanho do Prefixo: %d\n", prefixo);
            break;
        }
        case 18:{
            char* s1 = "Bola, Tijolo, Colher";
            char* s2 = "Asa Delta Colher";
            int sufixo = maiorSufixo(s1,s2);
            printf("Tamanho do Sufixo: %d\n", sufixo);
            break;
        }
        case 19:{
            char* s1 = "Passaro sem Asa";
            char* s2 = "Asa Delta Penada";
            int sufPrefixo = sufPref(s1,s2);
            printf("Tamanho do SufPref: %d\n", sufPrefixo);
            break;
        }
        case 20:{
            char* s1 = "Barco afundado no rio de azeite";
            int palavras = contaPal(s1);
            printf("Numero de Palavras: %d\n", palavras);
            break;
        }

    }

    return 0;
}
