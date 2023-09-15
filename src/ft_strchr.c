#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    char *strcpy;

    strcpy = (char *) str;
    while (*strcpy)
    {
        if (*strcpy == (char) c)
            return(strcpy);
        strcpy++;
    }
    if ((char) c == '\0')
        return (strcpy);
    return ((char *) 0);
}
