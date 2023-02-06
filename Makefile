CC = gcc
CFLAGS = -Wall -Wextra -ggdb -lm

output: main.c
	$(CC) -o math_parser main.c $(CFLAGS)
