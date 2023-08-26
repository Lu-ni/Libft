#include "libft.h"

void *memset(void *b, int c, size_t len)
{
    char *str;

    str = (char *)b;
    while (len-- > 0)
    {
        *str = c;
    }
    return (b);
}
