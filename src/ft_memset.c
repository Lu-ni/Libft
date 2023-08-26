#include "libft.h"

void *memset(void *b, int c, size_t len)
{
    void *str;

    str = b;
    while (len-- >= 0)
    {
        *str = c;
    }
    return (b);
}
