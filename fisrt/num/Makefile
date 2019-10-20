all: menu.c min.o max.o diff.o sum.o
	gcc menu.c min.o max.o diff.o sum.o -o menu
min.o: min.c
	gcc -c min.c -o min.o
max.o: max.c
	gcc -c max.c -o max.o
diff.o: diff.c
	gcc -c diff.c -o diff.o
sum.o: sum.c
	gcc -c sum.c -o sum.o
clean:
	rm -rf *.o FinishedProg
