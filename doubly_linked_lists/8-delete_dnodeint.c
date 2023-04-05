#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at the given index of a
 * doubly linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if the node was deleted successfully, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
	return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		return (-1);
	current = current->next;
	}
	temp = current->next;

	if (temp == NULL)
		return (-1);
	current->next = temp->next;
	if (current->next != NULL)
	current->next->prev = current;
	free(temp);

	return (1);
}
