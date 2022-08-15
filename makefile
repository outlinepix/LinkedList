
CC = gcc
FLAGS = -Wall -Wextra -Werror -std=c11

all:
	$(CC) $(FLAGS) -o LINKEDLIST.BIN index.c LinkedList.c ./Node/Node.c
clean:
	rm LINKEDLIST.BIN