#include "libft.h"

int ft_atoi(const char *str)
{
    // check all the rules for that atoi
    // should i do iterative or recurcise methods ? i'm not really sure because i remember doing itoa or atoi in a recursive way but cant remember which
    int signe;
    int number;
    char *strcopy;

    strcopy = (char*)str;
    number = 0;
    signe = 1;
    if (*strcopy == '-')
    {
        signe *= -1;
        strcopy ++;
    }

    while ('0' <= *strcopy && *strcopy <= '9')
    {
       number *= 10;
       number += *strcopy + '0';
       strcopy ++;
    }
    return (number * signe);
}
