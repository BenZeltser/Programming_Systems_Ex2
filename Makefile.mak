CC=gcc
FLAGS= -Wall -g 

all: connections
connections: my_mat.o main.o
	$(CC) $(FLAGS) -o connections my_mat.o main.o

#obejcts
main.o: main.c, my_mat.h
	$(CC) $(FLAGS) -c main.c
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
.PHONY: clean all
clean:
	rm -f rm -f *.o, connections