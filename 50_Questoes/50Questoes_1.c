
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

/*---------------Exercicio 12--------------*/
void removeIndex(char s[], int i){

    int j;

    for(j=i; s[j]; j++)
        s[j] = s[j+1];

}

void strnoV (char s[]){

    int i = 0;
    char c;

    while(c = s[i]){
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
        || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            removeIndex(s, i);
        else i++;
    }
}

/*---------------Exercicio 13--------------*/
void truncW (char t[], int n){
    int aux = 0, i = 0;

    while(t[i]){
        if(t[i] == ' '){
            i++;
            aux = 0;
        }else if(aux == n)
            removeIndex(t,i);
        else{
            aux++;
            i++;
        }
    }
}

/*---------------Exercicio 14-------------*/
int freqChar(char c, char* s){
    int r = 0;

    for(int i = 0; s[i]; i++)
        if(s[i] == c)
            r++;

    return r;
}

char charMaisfreq (char s[]){

    int max = 0;
    char c = s[0];

    for(int i = 0; s[i]; i++){
        int freq = freqChar(s[i], s);
        if(freq > max){
            max = freq;
            c = s[i];
        }
    }

    return c;
}

/*---------------Exercicio 15-------------*/
int iguaisConsecutivos (char s[]){

    int r = 1, max = 0;

    for(int i = 0; s[i]; i++){
        if(s[i] == s[i+1])
            r++;
        else{  
            if(r > max)
                max = r;  
            r = 1;
        }
    }

    return max;

}

/*---------------Exercicio 16-------------*/
int not_prev_to(char s[], int x, int y){

    int r = 1;

    for(int i = x; i < y && r; i++){
        if(s[i] == s[y])
            r = 0;
        
    }

    return r;

}

int difConsecutivos(char s[]){

    int r = 0;

    for(int i = 0; s[i]; i++){
        int isConseq = 0;
        for(int j = i; s[j]; j++)
            if(not_prev_to(s,i,j)) isConseq++;
            else break;

        if(isConseq > r ) r = isConseq;
    }

    return r;
}

/*---------------Exercicio 17-------------*/
int maiorPrefixo (char s1 [], char s2 []){

    int r;

    for(r = 0; s1[r] && s2[r] && s1[r] == s2[r]; r++)
        ;

    return r;
}

/*---------------Exercicio 18-------------*/
int maiorSufixo (char s1 [], char s2 []){

    int s1len;
    int s2len;
    int r;

    for(s1len = 0; s1[s1len]; s1len++);
    for(s2len = 0; s2[s2len]; s2len++);

    for(r = 0; r < s1len && r < s2len && s1[s1len - r -1] == s2[s2len - r -1]; r++);
    
    return r;
}

/*---------------Exercicio 19-------------*/
int sufPref (char s1[], char s2[]){

    int i = 0, j = 0, r = 0;

    while(s1[i] && s2[j]){
        if(s1[i] == s2[j]){
            i++;
            j++;
            r++;
        } else {
            r = 0;
            j = 0;
            i++;
        }
    }
    
    if(!s2[j] && s1[i])
        r = 0;
        
    return r;
}

/*---------------Exercicio 20-------------*/
int contaPal (char s[]){

    int pal = 0, inWord = 0;

    for(int i = 0; s[i]; i++){
        if(s[i] == ' ' || s[i] == '\n'){
            if(inWord)
                pal++;
            inWord = 0;
        }else
            inWord = 1;
    }

    if(inWord)
        pal++;

    return pal;
}

/*---------------Exercicio 21-------------*/
int contaVogais (char s[]){

    int vogais = 0;

    for(int i = 0; s[i]; i++)
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
           s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vogais++;

    return vogais;        
}

/*---------------Exercicio 22-------------*/
int contida (char a[], char b[]){

    int r = 1;

    for(int i = 0; a[i] && r; i++){
        int aux = 0;
        for(int j = 0; b[j] && !aux; j++)
            if(a[i] == b[j])
                aux = 1;
        if(!aux)
            r = 0;       
    }

    return r;

}

/*---------------Exercicio 23-------------*/
int palindorome (char s[]){

    int len;
    for(len = 0; s[len]; len++);

    int pali = 1;
    for(int i = 0; i < (len - i - 1) && pali; i++)
        if(s[i] != s[len - i - 1])
            pali = 0;
        
    return pali;
}

/*---------------Exercicio 24-------------*/
int remRep (char x[]) {
    if(!(*x)) return 0;
    int i = 1;
    char prev = x[0];
    while(x[i]) {
        if(x[i] == prev) removeIndex(x, i);
        else prev = x[i++];
    }
    return i;
}

/*---------------Exercicio 25-------------*/
int limpaEspacos (char t[]){

    int i = 0, inSpace = 0;

    while(t[i]){
        if(t[i] == ' '){
            if(!inSpace)
                inSpace = 1;
            else{
                removeIndex(t,i);
                continue;
            }
        } else
            inSpace = 0;
        i++;        
           
    }
    
    return i;
}

/*---------------Exercicio 26-------------*/
void insere (int v[], int N, int x){

    int i = 0;

    while(v[i]){
        if(v[i] <= x)
            i++;
        else{
            for(int j = N; i < j; j--)
                v[j] = v[j-1];
            
            v[i] = x;
            break;
        }
    }

    if(!v[i]) v[N] = x;
}

/*---------------Exercicio 27-------------*/
void merge (int r [], int a[], int b[], int na, int nb){

    int i, j, rlen = 0;

    for(i = 0, j = 0; i < na && j < nb;){
        if(a[i] <= b[j])
            r[rlen++] = a[i++];
        else
            r[rlen++] = b[j++];
    }

    if(i < na && j == nb)
        while(i < na)
            r[rlen++] = a[i++];
    else
        while(j < nb)
            r[rlen++] = b[j++]; 
   
}

/*---------------Exercicio 28-------------*/
int crescente (int a[], int i, int j){
    int r = 1;

    for(int k = i; k < j && r; k++)
        if(a[k] > a[k+1])
            r = 0;

    return r;
}

/*---------------Exercicio 29-------------*/
int retiraNeg (int v[], int N){

    int i = 0, j;

    while(i < N)
        if(v[i] < 0){
            for(j = i; j < (N-1); j++)
                v[j] = v[j+1];
            N--;    
        } else{

            i++;
        }


    return N;
}

/*---------------Exercicio 30-------------*/
int menosFreq (int v[], int N) {
    int freq = 1, minFreq = N, ans = v[0], i;
    for(i = 1; i < N; i++) {
        if(v[i] == v[i - 1]) freq++;
        if(v[i] != v[i - 1]) {
            if(freq < minFreq) {
                minFreq = freq;
                ans = v[i - 1];
            }
            freq = 1;
        }
    }
    if(freq < minFreq) {
        minFreq = freq;
        ans = v[i - 1];
    }
    return ans;
}

/*---------------Exercicio 31-------------*/
 int maisFreq (int v[], int N){

    int freq = 1, maxFreq = 0, ans = v[0], i;
    for(i = 1; i < N; i++) {
        if(v[i] == v[i - 1]) freq++;
        if(v[i] != v[i - 1]) {
            if(freq > maxFreq) {
                maxFreq = freq;
                ans = v[i - 1];
            }
            freq = 1;
        }
    }
    if(freq > maxFreq) {
        maxFreq = freq;
        ans = v[i - 1];
    }
    return ans;

 }

/*---------------Exercicio 32-------------*/
int maxCresc (int v[], int N){

    int r = 0, bigger = 1;

    for(int i = 0; i < (N-1); i++)
        if(v[i] <= v[i+1])
            bigger++;
        else{
            if(bigger > r)
                r = bigger;
                bigger = 1;
        }

    if(bigger > r)
        r = bigger;

    return r;
}

/*---------------Exercicio 33-------------*/
int elimRep (int v[], int N){

    int i = 1;
    while(i < N) {
        int belongs = 0;
        int j;
        for(j = 0; j < i; j++) {
            if(v[i] == v[j]) belongs = 1;
        }
        if(belongs) {
            for(j = i; j < N; j++) {
                v[j] = v[j + 1];
            }
            N--;
        } else i++;
    }
    return N;
}

/*---------------Exercicio 34-------------*/
int elimRepOrd (int v[], int N){

    int i = 1;
    while(i < N) {
        int belongs = 0;
        int j;
        for(j = 0; j < i; j++) {
            if(v[i] == v[j]) belongs = 1;
        }
        if(belongs) {
            for(j = i; j < N; j++) {
                v[j] = v[j + 1];
            }
            N--;
        } else i++;
    }
    return N;
}

/*---------------Exercicio 35-------------*/
int comunsOrd (int a[], int na, int b[], int nb){

    int i = 0, j = 0, r = 0;

    while(i < na && j < nb){
        if(a[i] < b[j])
            i++;
        else if(a[i] > b[j])
            j++;
        else{
            i++;
            j++;
            r++;
        }

    }
    return r;
}
/*---------------Exercicio 36-------------*/
/*---------------Exercicio 37-------------*/
/*---------------Exercicio 38-------------*/
/*---------------Exercicio 39-------------*/
/*---------------Exercicio 40-------------*/
/*---------------Exercicio 41-------------*/
/*---------------Exercicio 42-------------*/
/*---------------Exercicio 43-------------*/
/*---------------Exercicio 44-------------*/
/*---------------Exercicio 45-------------*/
/*---------------Exercicio 46-------------*/
/*---------------Exercicio 47-------------*/
/*---------------Exercicio 48-------------*/
/*---------------Exercicio 49-------------*/
/*---------------Exercicio 50-------------*/