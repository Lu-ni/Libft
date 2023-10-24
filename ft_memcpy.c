#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *destcpy;
	char *srccpy;

	destcpy = (char *) dst;
	srccpy = (char *) src;
	while (n > 0)
	{
		*destcpy++ = *srccpy++;
		n--;
	}
	return (dst);
}
