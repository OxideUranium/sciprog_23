all: matmult

matmult: main.o matrix.o
	gcc -o matmult main.o matrix.o -lm

# Compile main.c into main.o
main.o: main.c
	gcc -c main.c -lm

# Compile matrix.c into matrix.o
matrix.o: matrix.c
	gcc -c matrix.c -lm

clean:
	rm -f matmult main.o matrix.o