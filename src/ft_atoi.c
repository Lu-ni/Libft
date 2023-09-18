#include "libft.h"

int ft_atoi(const char *str)
{
    int signe;
    int number;
    char *strcopy;

    strcopy = (char*)str;
    number = 0;
    signe = 1;
    if (*strcopy == '-' || *strcopy == '+')
    {
        if (*strcopy == '-')
            signe *= -1;
        strcopy ++;
    }

    while ('0' <= *strcopy && *strcopy <= '9')
    {
       number *= 10;
       number += *strcopy - '0';
       strcopy ++;
    }
    return (number * signe);
}
