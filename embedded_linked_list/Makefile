CC = gcc

CFLAGS = -Wall -Wextra -I./src

TARGET = test_linked_list

SRC = src/linked_list.c
TEST = test/test_linked_list.c

all:
	$(CC) $(CFLAGS) $(SRC) $(TEST) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)