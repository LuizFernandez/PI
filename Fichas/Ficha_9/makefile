Ficha_9 : Ficha_9.o ABin.o
	gcc -o Ficha_9 Ficha_9.o ABin.o

ABin.o : ABin.h ABin.c
	gcc -c ABin.c

Ficha_9.o : Ficha_9.c ABin.h ABin.c
	gcc -c Ficha_9.c

.PHONY : clean
clean : 
	-rm Ficha_9 *.o