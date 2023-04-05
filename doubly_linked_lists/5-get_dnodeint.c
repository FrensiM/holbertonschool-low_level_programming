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
		if ( i < index)
			while (head != NULL && i < index)
			{
				head = head->next;
				i++;
			}
		else
			printf("(nil)");
	return (head);
}
