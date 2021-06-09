Ficha_10 : Ficha_10.o ABin.o
	gcc -o Ficha_10 Ficha_10.o ABin.o

ABin.o : ABin.h ABin.c
	gcc -c ABin.c

Ficha_10.o : Ficha_10.c ABin.h ABin.c
	gcc -c Ficha_10.c

.PHONY : clean
clean : 
	-rm Ficha_10 *.o