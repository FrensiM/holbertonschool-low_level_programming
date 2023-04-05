#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	
	if (head == NULL)
		return (NULL);
	else
		while (head != NULL && i < index)
		{
			if (i > index)
				printf("(nil)");
			head = head->next;
			i++;
		}
	return (head);
}
