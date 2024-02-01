#include "monty.h"

/**
 * f_mod - Computes the remainder of dividing the second top element of the
 * stack by the top element of the stack
 * @head: pointer to the stack's head
 * @counter: Line number
 * Return: No return
 */
void f_mod(stack **head, unsigned int counter)
{
	stack_t *temp = *head;
	int stack_length = 0, remainder;
	while (temp != NULL)
	{
		temp = temp->next;
		stack_length++;
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}
	remainder = (*head)->next->n % (*head)->n;
	(*head)->neaxt->n = remainder;
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
