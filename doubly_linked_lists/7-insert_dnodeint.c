#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	dlistint_t *tmp2 = malloc(sizeof(dlistint_t));

	if (new = NULL)
		return (NULL);

	while (n != 1)
	{
		tmp = tmp->next;
		n--;
	}	
	tmp2 = tmp->next;
	tmp->next = new;
	tmp2->prev = new;
	new->next = tmp2;
	new->prev = tmp;
	return (new);

}
