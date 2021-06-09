
#include "ordena.h"

void swapA (Aluno t[], int i, int j){
	Aluno aux = t[i];
	t[i] = t[j];
    t[j] = aux;
}

void swapI (int v[], int i, int j){
	int aux = v[i];
	v[i] = v[j] ; v[j] = aux;
}




