CC = gcc
TARGET = biglet

all: $(TARGET)

$(TARGET): biglet.o art.o
	gcc biglet.o art.o -o $(TARGET)

biglet.o: biglet.c
	gcc -c biglet.c -o biglet.o

art.o: art.c
	gcc -c art.c -o art.o

clean:
	rm -f *.o $(TARGET)
