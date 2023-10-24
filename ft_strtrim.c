#include "../include/libft.h"
#include <stdlib.h>
static int	ft_isinset(char c, char const *set)
{
	while(*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
//	char	*trimmedstr;
	char	*start;
//	char	*end;
	int		i;

	i = 0;

	while (s1[i] && ft_isinset(s1[i],set))
			i++;
	start = (char *) &s1[i];
	i = ft_strlen(s1) - 1;
	while (s1[i] && ft_isinset(s1[i],set))
		i--;
	return (ft_substr(s1, start - s1, i + 1));

}
