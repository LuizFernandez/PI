50Questoes_2 : main.o 50Questoes_2.o Aux.o
	gcc -o 50Questoes_2 main.o 50Questoes_2.o Aux.o

50Questoes_2.o : 50Questoes_2.c 50Questoes_2.h
	gcc -c 50Questoes_2.c

Aux.o : Aux.c Aux.h
	gcc -c Aux.c

main.o : main.c Aux.c Aux.o 50Questoes_2.c 50Questoes_2.h
	gcc -c main.c

.PHONY : clean
clean : 
	-rm 50Questoes_2 *.o