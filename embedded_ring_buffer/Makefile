CC = gcc

CFLAGS = -Wall -Wextra -I./src

TARGET = test_ring_buffer

SRC = src/ring_buffer.c
TEST = test/test_ring_buffer.c

all:	
	gcc $(CFLAGS) $(SRC) $(TEST) -o $(TARGET)
run:	
	./$(TARGET)
clean:	
	rm -f $(TARGET)