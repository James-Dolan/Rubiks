CFLAGS=-W -Wall -pedantic -g
#CFLAGS=-W -Wall -pedantic
OBJECTS=cube.o

rubiks: $(OBJECTS)
	gcc -o rubiks $(CFLAGS) $(OBJECTS)

clean:
	rm -f *.o rubiks

cube.o: cube.c
