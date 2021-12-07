CC=gcc
compile: main.o loop.o builtin_shell_cmd.o
	$(CC) main.o loop.o builtin_shell_cmd.o

main.o: main.c ../includes/loop.h ../includes/builtin_shell_cmd.h
	$(CC) -c main.c

loop.o: loop.c ../includes/loop.h ../includes/builtin_shell_cmd.h
	$(CC) -c loop.c

builtin_shell_cmd.o: builtin_shell_cmd.c ../includes/builtin_shell_cmd.h
	$(CC) -c builtin_shell_cmd.c

clean: main.o loop.o builtin_shell_cmd.o
	rm main.o loop.o builtin_shell_cmd.o