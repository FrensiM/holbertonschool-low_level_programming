#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - func of adding node
 * @head: list
 * @str: string
 * Return: return the value
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	for (i = 0; str[i] != '\0'; i++)
	if (new == NULL || str == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
