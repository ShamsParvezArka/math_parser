#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define maxB 8

uint8_t *arr;
size_t bit_size;
void take_input(void);

int main()
{
	take_input();
	return 0;
}

void take_input() {
	arr = malloc(maxB * sizeof(uint8_t));
	bit_size = 0;
	uint8_t input = getchar();
	while (input != '\n') {
		arr[bit_size] = input;
		bit_size++;
		input = getchar();
	}
	arr = realloc(arr, bit_size * sizeof(uint8_t));
}
