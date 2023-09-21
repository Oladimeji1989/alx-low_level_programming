#ifndef LISTS_HEADER_FILE
#define LISTS_HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - is a singly link list
 * @str: malloc string parameter
 * @len: string len parameter
 * @next: next parameter
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
