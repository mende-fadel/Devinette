CC=gcc
CFLAGS=-Wall -g
DEPS = devinette.h
OBJ = test.o devinette.o
SRC = test.c devinette.c
EXEC = play

%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)


$(EXEC): $(OBJ)
		$(CC) -o $@ $^ -lm

DOXYGEN = Doxyfile
DOCDIR = html/ latex/


#Archive files 
ARCHIVE = $(EXEC)_archive.tar.gz

doc: $(DOXYGEN)
		doxygen $(DOXYGEN)

archive: 
		tar -cvzf $(ARCHIVE) $(DEPS) $(SRC) $(DOXYGEN) makefile README.md 


clean:
	rm -rf $(OBJ) $(EXEC) $(ARCHIVE) $(DOCDIR)
