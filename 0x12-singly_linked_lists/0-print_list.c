#include "lists.h"
/**
 * print_list - To  prints all the elements of a list_t list
 * @h: list parameter
 * Return: int
 */
size_t print_list(const list_t *h)
{
	unsigned int o = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		o++;
		h = h->next;
	}
	return (o);
}
