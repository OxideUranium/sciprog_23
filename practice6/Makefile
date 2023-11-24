all: matmult

matmult: main.o matmult.o
	gcc -o matmult main.o matmult.o

main.o: main.c
	gcc -c main.c

matmult.o: matmult.c
	gcc -c matmult.c

clean:
	rm -f matmult main.o matmult.o
