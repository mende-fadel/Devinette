CC=gcc
CFLAGS=-Wall -g
DEPS = devinette.h
OBJ = test.o devinette.o

%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o test
