Ficha_8 : Ficha_8.o Listas.o Stack.o Queue.o
	gcc -o Ficha_8 Ficha_8.o Listas.o Stack.o Queue.o

Listas.o : Listas.c Listas.h
	gcc -c Listas.c

Stack.o : Stack.c Stack.h Listas.h
	gcc -c Stack.c

Queue.o : Queue.c Queue.h Listas.h
	gcc -c Queue.c

Ficha_8.o : Ficha_8.c Stack.h Listas.h Queue.h
	gcc -c Ficha_8.c

.PHONY : clean
clean : 
	-rm Ficha_8 *.o 