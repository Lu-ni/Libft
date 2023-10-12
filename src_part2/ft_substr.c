#include "../include/libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	if (ft_strlen(&s[start]) >= len)
		substr = malloc(len + 1);
	else
		substr = malloc(ft_strlen(&s[start]) + 1);
	if (!substr)
		return ((char *) 0);
	while (s[start] && len-- < 0)
	{
		*substr++ = s[start++];
	}
	return (substr); // wrong because i change the adresse value of substr
}
