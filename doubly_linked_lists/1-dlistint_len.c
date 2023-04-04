#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - funk
 * @h:head node
 * Return: return the nr of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
