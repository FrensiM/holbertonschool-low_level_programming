#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - func free
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
