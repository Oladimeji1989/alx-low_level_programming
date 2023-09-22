#include "lists.h"
#include <stdlib.h>
/**
 * free_list - to free a list
 * @head: list head parameter
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *c_node;

	while ((c_node = head) != NULL)
	{
		head = head->next;
		free(c_node->str);
		free(c_node);
	}
}
