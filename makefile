CC=gcc

all: one two five six

one: one.o
	$(CC) -o one one.o
two: two.o
	$(CC) -o two two.o
five: five.o
	$(CC) -o five five.o
six: six.o
	$(CC) -o six six.o

one.o: one.c
two.o: two.c
five.o: five.c
six.o: six.c

.PHONY: run clean

run:
	./one
	./two
	./five
	./six

clean:
	rm *.o

