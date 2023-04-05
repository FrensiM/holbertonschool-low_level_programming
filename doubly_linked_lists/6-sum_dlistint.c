#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - func of sum
 * @head: nodes
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
