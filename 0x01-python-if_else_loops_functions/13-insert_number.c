#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - adds a node in the sorted list listint_t
 * @head: pointer to the first node of the list
 * @number: value to be added into the sorted list
 *
 * Return: address of the last node or NULL if it fails
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current, *temp;

	current = *head;
	new = malloc(sizeof(listint_t));
	new->n = number;
	new->next = NULL;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if ((*head == NULL) || (*head)->n >= new->n)
	{
		new->next = *head;
		return (new);
	}

	while (current != NULL)
	{
		if (current->n > new->n)
			break;
		temp = current;
		current = current->next;
	}

	new->next = current;
	temp->next = new;

	return (new);
}
