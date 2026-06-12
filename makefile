CC = gcc
TARGET = biglet
C_FILES = biglet.c art.c
O_FILES = biglet.o art.o

all: $(TARGET)

$(TARGET): $(O_FILES)
	$(CC) $(O_FILES) -o $(TARGET)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(O_FILES) $(TARGET)
