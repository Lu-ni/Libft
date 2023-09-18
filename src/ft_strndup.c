#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    char *duplicate;
    char *duplicate_first;
    char *s1copy;

    s1copy = (char *) s1;
    duplicate = (char *)malloc (ft_strlen(s1) + 1);
    duplicate_first = duplicate;
    while (*s1copy)
    {
        *duplicate = *s1copy;
        duplicate ++;
        s1copy ++;
        if (!*s1copy)
            *duplicate = '\0';
    }
    return (duplicate_first);
}
