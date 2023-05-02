#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (!head || !*head)
		return (0);
	y = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;
	return (y);
}
