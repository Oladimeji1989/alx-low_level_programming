#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - to return number of element in a link
 * @h: linked parameter
 * Return: unsigned int
 */
size_t list_len(const list_t *h)
{
	unsigned int number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
