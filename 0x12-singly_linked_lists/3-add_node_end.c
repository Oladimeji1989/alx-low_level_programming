#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node_end - to new node to the end of list
 * @head: list head parameter
 * @str: strings parameter
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *c_node;
	unsigned int a;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	n_node->len = a;
	n_node->next = NULL;
	c_node = *head;

	if (c_node == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (c_node->next != NULL)
			c_node = c_node->next;
		c_node->next = n_node;
	}
	return (*head);
}
