CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = src/main.c src/server.c src/client.c
OBJ = $(SRC:.c=.o)
TARGET = app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

clean:
	rm -f src/*.o $(TARGET)
