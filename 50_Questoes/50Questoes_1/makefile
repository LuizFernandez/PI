50Questoes_1 : main.o 50Questoes_1.o
	gcc -o 50Questoes_1 main.o 50Questoes_1.o

50Questoes_1.o : 50Questoes_1.c 50Questoes_1.h
	gcc -c 50Questoes_1.c

main.o : main.c 50Questoes_1.c 50Questoes_1.h
	gcc -c main.c

.PHONY : clean
clean :
	-rm 50Questoes_1 *.o