
#include "Parte_2.h"

void P2exer_1(){
    int x, y;
    x = 3; y = 5;
    if (x > y)
        y = 6;
    printf ("%d %d\n", x, y);
}

// x = 3; y = 5;

void P2exer_2(){
    int x, y;
    x = y = 0;
    while (x != 11) {
    x = x+1; y += x;
    }
    printf ("%d %d\n", x, y);
}

/** x = 1; y = 1;
 *  x = 2; y = 3;
 *  x = 3; y = 6;
 *  x = 4; y = 10;
 *  x = 5; y = 15;
 *  x = 6; y = 21;
 *  x = 7; y = 28;
 *  x = 8; y = 36;
 *  x = 9; y = 45;
 *  x = 10; y = 55;
 *  x = 11; y = 66;
 */

void P2exer_3(){
    int i;
    for (i=0; (i<20) ; i++)
        if (i%2 == 0) putchar ('_');
        else putchar ('#');
}

// _#_#_#_#_#_#_#_#_#_#

void P2exer_4(int n){

    while (n>0) {
        if (n%2 == 0) putchar ('0');
        else putchar ('1');
        n = n/2;
    }
    putchar ('\n');

}

/** n = 16
 * 
 *  00001
 */
