CC=gcc
CFLAGS=-Wall -g
DEPS = tableau.h alea.h io.h tri.h
OBJ = main.o alea.o io.o tri.o

%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o main
