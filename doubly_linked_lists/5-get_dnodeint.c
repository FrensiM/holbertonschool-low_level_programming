#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - print list
 * @head: first node
 * @index: where to get int
 * Return: return the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new = head;
	unsigned int i = 0;

	while (new != NULL)
	{
		if ( i == index)
			return (new);
		i++;
		new = new->next;
	}
	return (NULL);
}
