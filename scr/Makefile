CC=gcc
compile: main.o loop.o builtin_shell_cmd.o
	$(CC) main.o loop.o builtin_shell_cmd.o

main.o: main.c
	$(CC) -c main.c

loop.o: loop.c
	$(CC) -c loop.c

builtin_shell_cmd.o: builtin_shell_cmd.c
	$(CC) -c builtin_shell_cmd.c

clean: main.o loop.o builtin_shell_cmd.o
	rm main.o loop.o builtin_shell_cmd.o