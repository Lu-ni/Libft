#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *destcpy;
	char *srccpy;

	destcpy = (char *) dst + len - 1;
	srccpy = (char *) src + len - 1;
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
	while (len > 0)
	{
		*destcpy-- = *srccpy--;
		len--;
	}
	return (dst);
}
