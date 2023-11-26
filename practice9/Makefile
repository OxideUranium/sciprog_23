all: main

main: main.o magic_square.o
	gcc -o main main.o magic_square.o

# Compile .c into .o
main.o: main.c magic_square.h
	gcc -c main.c 

magic_square.o: magic_square.h
	gcc -c magic_square.h

clean:
	rm -f main main.o magic_square.o