CC=gcc
CFLAGS=-I.
DEPS = shell.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

shell: main.o shell_input.o
	$(CC) -o shell main.o shell_input.o