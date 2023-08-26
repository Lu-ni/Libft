size_t ft_strlen(const char *str, size_t len)
{
    int i;

    i = 0;
    while (str[i] && i < len)
        i++;
    return (i);
}
