#ifndef Questoes_50_1
#define Questoes_50_1

#include <stdio.h>
#include <string.h>

void scanBigger();
void scanMedia();
void scan2Bigger();
int bitsUm (unsigned int n);
int trailingZ (unsigned int n);
int qDig (unsigned int n);
char *mystrcat (char s1[], char s2[]);
char *mystrcpy (char *dest, char source[]);
int mystrcmp (char s1[], char s2[]);
char *mystrstr (char s1[], char s2[]);
void mystrrev (char s[]);
void strnoV (char s[]);
void truncW (char t[], int n);
char charMaisfreq (char s[]);
int iguaisConsecutivos (char s[]);
int difConsecutivos (char s[]);
int maiorPrefixo (char s1 [], char s2 []);
int maiorSufixo (char s1 [], char s2 []);
int sufPref (char s1[], char s2[]);
int contaPal (char s[]);
int contaVogais (char s[]);
int contida (char a[], char b[]);
int palindorome (char s[]);
int remRep (char x[]);
int limpaEspacos (char t[]);
void insere (int v[], int N, int x);
void merge (int r [], int a[], int b[], int na, int nb);
int crescente (int a[], int i, int j);
int retiraNeg (int v[], int N);
int menosFreq (int v[], int N);

#endif