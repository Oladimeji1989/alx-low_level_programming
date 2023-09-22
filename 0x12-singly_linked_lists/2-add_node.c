#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - to add nodes at the beginning of list
 * @head: list head parameter
 * @str: string parameter
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int size = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[size])
		size++;

	temp->len = size;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
