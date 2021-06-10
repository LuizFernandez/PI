
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
            char* s1 = "Barco afundado num rio de azeite";
            int palavras = contaPal(s1);
            printf("Numero de Palavras: %d\n", palavras);
            break;
        }
        case 21:{
            char* s1 = "Singularidade epica!!";
            int vogais = contaVogais(s1);
            printf("Numero de Vogais: %d\n", vogais);
            break;
        }
        case 22:{
            char* s1 = "Braca";
            char* s2 = "Bracara";
            int cont = contida(s1, s2);
            printf("String %s %s em %s\n", s1, cont ? "contida" : "não está contida", s2);
            break;
        }
        case 23:{
            char* s1 = "Lava esse aval";
            int pali = palindorome(s1);
            printf("Palavra %s %s\n", s1, pali ? "é palíndromo" : "não é palindromo");
            break;
        }
        case 24:{
            char* s1 = strdup("aaaaabbbaaaadddddaaaccccc");
            int length = remRep(s1);
            printf("New String: %s\n", s1);
            break;
        }
        case 25:{
            char* s1 = strdup("Absfs   ASfd  asfda");
            int newlen = limpaEspacos(s1);
            printf("Tamanho de \"%s\" : %d\n", s1, newlen);
            break;
        }
        case 26:{
            int v[10] = {1,2,3,4,5,7,8,9,10,11};
            insere(v,10,6);
            for(int i = 0; i < 11; i++)
                printf("%d ", v[i]);
            printf("\n");
            break;    
        }
        case 27: {
            int v1[10] = {1,3,5,7,9,11,13,15,17,19};
            int v2[10] = {0,2,4,6,8,10,12,14,16,18};
            int r[20];
            merge(r,v1,v2,10,10);
            for(int i = 0; i < 20; i++)
                printf("%d ", r[i]);
            printf("\n");
            break;  
        }
        case 28:{
            int v1[10] = {0,2,4,6,8,10,12,14,16,18};
            int ordenado = crescente(v1,3,7);
            printf("Vetor v1 %s entre as posicoes 3 e 7\n", ordenado ? "esta ordenado" : "não está ordenado");
            break;
        }
        case 29:{
            int v1[10] = {0,2,4,-2,8,-7,12,14,-9,18};
            int neg = 10 - retiraNeg(v1,10);
            printf("Vetor v1 tinha %d numeros negativos\n", neg);
            break;
        }
        case 30:{
            int v1[10] = {0,2,2,2,8,8,12,13,14,15};
            printf("Numero menos frequente em v1 é %d\n", menosFreq(v1,10));
            break;
        }
        case 31:{
            int v1[10] = {0,2,2,2,8,8,12,13,14,15};
            printf("Numero mais frequente em v1 é %d\n", maisFreq(v1,10));
            break;
        }
        case 32:{
            int v1[10] = {3,123,54,776,87,45,4,12,14,25};
            printf("Maior ordem crescente de v1 %d\n", maxCresc(v1,10));
            break;
        }
        case 33:{
            int v1[10] = {1,4,2,1,4,6,8,3,6,8};
            printf("Novo tamanho apos perda de elementos repetidos %d\n", elimRep(v1,10));
            break;
        }
        case 34:{
            int v1[10] = {1,1,2,3,4,6,6,8,8,9};
            printf("Novo tamanho apos perda de elementos repetidos %d\n", elimRepOrd(v1,10));
            break;
        }
        case 35:{
            int v1[10] = {1,1,2,3,4,6,6,8,8,9};
            int v2[10] = {1,3,3,4,6,7,8,10,22,33};
            int rep = comunsOrd(v1, 10, v2, 10);
            printf("Numero de elementos comuns %d\n", rep);
            break;
        }

    }

    return 0;
}
