#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	char data;
	struct Node *link;
} node;
node *new_raw_node;

int main()
{
	char ch = getchar();
	while (ch != '\n') {
	}
	return 0;
}

// Blueprint:
// push(input: char) -> raw_list  <--
// queue(raw_list) -> infix_list
// infix_list -> postfix_list
