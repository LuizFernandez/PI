
#include "Parte_1.h"

void exer_1(){
    int x, y;
    x = 3; y = x+1;
    x = x*y; y = x + y;
    printf("%d %d\n", x, y);
}

/** x = 3; y = 4;
 *  x = 12; y = 16;
 */ 

void exer_2(){
    int x, y;
    x = 0;
    printf ("%d %d\n", x, y);
}

/** x = 0; 
 */

void exer_3(){
    char a, b, c;
    a = 'A'; b = ' '; c = '0';
    printf ("%c %d\n", a, a);
    a = a+1; c = c+2;
    printf ("%c %d %c %d\n", a, a, c, c);
    c = a + b;
    printf ("%c %d\n", c, c);
}

/** p1 = A 65
 *  p2 = B 66 2 50
 *  p3 = b 98
 */

void exer_4(){
    int x, y;
    x = 200; y = 100;
    x = x+y; y = x-y; x = x-y;
    printf ("%d %d\n", x, y);
}

/** x = 300; y = 200; x = 100;
 */ 