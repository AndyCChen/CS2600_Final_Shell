CC=gcc
compile: main.o loop.o
	$(CC) main.o loop.o

main.o: main.c
	$(CC) -c main.c

loop.o: loop.c
	$(CC) -c loop.c

clean: main.o loop.o
	rm main.o loop.o