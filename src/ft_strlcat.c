#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    char *copydst;

    copydst = dst;
    if ((dstsize == 0) || (ft_strlen(dst) >= dstsize))
        return (ft_strlen(dst) + ft_strlen(src));
    while (*copydst)
        copydst++;
    while (*src && (ft_strlen(dst) < dstsize - 1))
        {
            *copydst = *src;
            copydst++;
            src++;
        }
    *copydst = '\0';
    return (ft_strlen(dst) + ft_strlen(src));
}
