#include "monty.h"

/**
 * f_pall - stack prnt
 * @head: head
 * @counter: none used
 * Return: none ret
*/

void f_pall(stack_t **head, unsigned int counter)

{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
	return;
	while (h)
{
	printf("%d\n", h->n);
	h = h->next;
}
}
