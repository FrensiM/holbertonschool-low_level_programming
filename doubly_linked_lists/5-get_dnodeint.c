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
	dlistint_t *new, *tmp;
	unsigned int i = 0;

	new = head;
	tmp = head;
	while (new != NULL)
	{
		new = new->next;
	}
	while (i != index)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
