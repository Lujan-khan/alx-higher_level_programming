#include "lists.h"
#include <stdlib.h>

/**
 * insert_node -  inserts a number into a sorted singly linked list
 * @head: singly list head
 * @number: number to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *temp, *new;

	current = *head, temp = *head, new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = number;
		new->next = NULL;
		*head = new;
		return (new);
	}
	if (temp == NULL)
		return (NULL);
	if (temp->n >= number)
	{
		new->n = number;
		new->next = temp;
		*head = new;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
		if (current->n >= number)
		{
			new->n = number;
			new->next = current;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	new = add_nodeint_end(head, number);
	return (new);
}
