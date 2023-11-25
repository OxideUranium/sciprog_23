all: matmult

matmult: main.o matrix.o
	gcc -o matmult main.o matrix.o

# Compile main.c into main.o
main.o: main.c
	gcc -c main.c

# Compile matrix.c into matrix.o
matrix.o: matrix.c
	gcc -c matrix.c

clean:
	rm -f matmult main.o matrix.o