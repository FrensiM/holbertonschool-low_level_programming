#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - print list int
 * @head: list to print
 * @n: num
 * Return: return the head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (tmp != NULL)
		tmp->next = new;
	new->prev = tmp;
	return (*new);
}
