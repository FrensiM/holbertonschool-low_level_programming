#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - func
 * @list_t - list
 * @h: head node
 * Return: return the nr of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
