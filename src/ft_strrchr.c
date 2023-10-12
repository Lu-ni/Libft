#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	char *lastoccurence;
	char *strcpy;

	lastoccurence = (char *) 0;
	strcpy = (char *) str;
	while (*strcpy)
	{
		if (*strcpy == (char) c)
			lastoccurence = strcpy;
		strcpy++;
	}
	if ((char) c == '\0')
		return (strcpy);
	if (lastoccurence != (char *) 0)
		return (lastoccurence);
	return ((char *) 0);
}
