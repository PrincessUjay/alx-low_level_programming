#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print the elements of a linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		printf("%s\n", (h->str != NULL) ? h->str : "(nil)");
		count++;
		h = h->next;
	}

	return (count);
}
