#include "lists.h"
/**
 * print_list - To  prints all the elements of a list_t list
 * @h: list parameter
 * Return: int
 */
size_t print_list(const list_t *h)
{
	int o;

	if (h == NULL)
		return (0);

	for (o = 1; h->next != NULL; o++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (o);
}
