#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - free double list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
