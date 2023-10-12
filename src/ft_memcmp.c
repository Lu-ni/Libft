#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	void *string1;
	void *string2;

	string1 = (void *) s1;
	string2 = (void *) s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*(unsigned char *) string1 != *(unsigned char *) string2)
			return (*(unsigned char *) string1 - *(unsigned char *) string2);
		string1++;
		string2++;
		n--;
	}
	return (0);
}
