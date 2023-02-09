#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct Node {
	uint8_t data;
	struct Node *link;
} node;
node *head, *new_node, *temp;

void queue(uint8_t s_bit);
void push(uint8_t s_bit);

int main()
{
	uint8_t ch = getchar();
	while (ch != '\n') {
		queue(ch);
		ch = getchar();
	}
	push('x');

	node *travel = malloc(sizeof(node));
	travel = head;
	while (travel != NULL) {
		printf("%c", travel->data);
		travel = travel->link;
	}

	return 0;
}

void queue(uint8_t s_bit) 
{
	new_node = (node*) malloc(sizeof(node));
	new_node->data = s_bit;
	new_node->link = NULL;

	if (head == NULL) head = new_node;
	else {
		temp = (node*) malloc(sizeof(node));
		temp = head;
		while (temp->link != NULL) {
			temp = temp->link;
		}
		temp->link = new_node;
	}
}

void push(uint8_t s_bit) 
{
	new_node = (node*) malloc(sizeof(node));
	new_node->data = s_bit;
	new_node->link = head;
	head = new_node;
}
