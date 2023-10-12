#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	char *mem;

	mem = (char *) malloc(count * size);
	while (size > 0)
	{
		mem[size - 1] = (char) 0;
		size--;
	}
	return ((void *) mem);
}
