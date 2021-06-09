
#include "Stack.h"

/*---------------Static Stack---------------*/

void SinitStack (SStack s){
    s->sp = 0;
}

int SisEmpty (SStack s){
    return s->sp == 0;
}

int Spush (SStack s, int x){
    if(s->sp == Max) return 1;

    s->values[s->sp++] = x;
    return 0;
}

int Spop (SStack s, int *x){
    if(SisEmpty(s)) return 1;

    *x = s->values[--(s->sp)];
    return 0;
}

int Stop (SStack s, int *x){
    if(SisEmpty(s)) return 1;

    *x = s->values[(s->sp-1)];
    return 0;
}

void ShowSStack (SStack s){
    int i;
    printf ("%d Items: ", s->sp);
    for (i=s->sp-1; i>=0; i--) 
        printf ("%d ", s->values[i]);
    putchar ('\n');
}

/*---------------Dynamic Stack---------------*/

int dupStack (DStack s) {
	int r = 0, i;
	int *t = malloc (2*s->size*sizeof(int));

	if (t == NULL) r = 1;
	else {
		for (i=0; i<s->size; i++) 
			t[i] = s->values[i];
		free (s->values);
		s->values = t;
		s->size*=2;
	}
	return r;
}

void DinitStack (DStack s){
    s->size = Max;
    s->sp = 0;
    s->values = malloc(sizeof(int)*Max);
}

int  DisEmpty (DStack s){
    return s->sp == 0;
}
int  Dpush (DStack s, int x){

    int r = 0;

    if(s->sp == s->size) r = dupStack(s);

    if(!r)
        s->values[s->sp++] = x;

    return r;
    
}

int  Dpop (DStack s, int *x){

    if(DisEmpty(s)) return 1;

    *x = s->values[--(s->sp)];

    return 0;
}

int  Dtop (DStack s, int *x){
    if(DisEmpty(s)) return 1;

    *x = s->values[s->sp - 1];

    return 0;
}

void ShowDStack (DStack s){
    int i;
    printf ("%d Items: ", s->sp);
    for (i=s->sp-1; i>=0; i--) 
        printf ("%d ", s->values[i]);
    putchar ('\n');
}