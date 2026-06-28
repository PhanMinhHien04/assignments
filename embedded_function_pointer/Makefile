CC = gcc

CFLAGS = -Wall -Wextra -I./src

TARGET = test_function_pointer

SRC = src/function_pointer.c
TEST = test/test_function_pointer.c

all:	
	gcc $(CFLAGS) $(SRC) $(TEST) -o $(TARGET)
run:	
	./$(TARGET)
clean:	
	rm -f $(TARGET)