#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    char *srccpy;

    srccpy = (char *) src;
    dstsize--;
    while(*srccpy && (dstsize > 0))
    {
        *dst++ = *srccpy++;
        dstsize--;
    }
    if (dstsize >= 0)
        *dst = '\0';
    return ft_strlen(src);
}
