#ifndef Questoes_50_1
#define Questoes_50_1

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;

typedef struct posicao {
    int x, y;
} Posicao;

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
int maisFreq (int v[], int N);
int maxCresc (int v[], int N);
int elimRep (int v[], int N);
int elimRepOrd (int v[], int N);
int comunsOrd (int a[], int na, int b[], int nb);
int comuns (int a[], int na, int b[], int nb);
int minInd (int v[], int n);
void somasAc (int v[], int Ac [], int N);
int triSup (int N, float m [N][N]);
void transposta (int N, float m [N][N]);
void addTo (int N, int M, int a [N][M], int b[N][M]);
int unionSet (int N, int v1[N], int v2[N], int r[N]);
int intersectSet (int N, int v1[N], int v2[N], int r[N]);
int intersectMSet (int N, int v1[N], int v2[N], int r[N]);
int unionMSet (int N, int v1[N], int v2[N], int r[N]);
int cardinalMSet (int N, int v[N]);
Posicao posFinal (Posicao inicial, Movimento mov[], int N);
int caminho (Posicao inicial, Posicao final, Movimento mov[], int N);
int maisCentral (Posicao pos[], int N);
int vizinhos (Posicao p, Posicao pos[], int N);

#endif