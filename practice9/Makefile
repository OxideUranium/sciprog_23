all: main

main: main.o 
	gcc -o main main.o -lm -std=c99

# Compile main.c into main.o
main.o: main.c magic_square.h
	gcc -c main.c -lm -std=c99

clean:
	rm -f main main.o