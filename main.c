#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	double data;
	struct Node *link;
} node;
node *head, *temp, *new_node;

void push(double N);
double pop(void);
void print_linked_list(node *ref_node);

int main()
{
	push(4);
	push(5);
	push(10);
	while (head != NULL) {
		printf("%.2lf ", head->data);
		head = head->link;
	}
	return 0;
}

void push(double N) {
	new_node = (node*) malloc(sizeof(node));
	new_node->data = N;
	new_node->link = head;
	head = new_node;
}
double pop(void) {
	temp = head;
	head = head->link;
	double popped_number = temp->data;
	free(temp);
	return popped_number;
}
