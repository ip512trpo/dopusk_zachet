CC=g++
CFLAGS=-c -Wall
all: uravneniye

uravneniye: main.o disc.o
	$(CC) disc.o main.o -o uravneniye

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

disc.o: disc.cpp
	$(CC) $(CFLAGS) disc.cpp

test: test.cpp
	$(CC) test.cpp -o test
	./test
