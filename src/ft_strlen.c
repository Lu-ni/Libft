size_t ft_strlen(const char *str, size_t maxlen)
{
    int i;

    i = 0;
    while (str[i] && i < maxlen)
        i++;
    return (i);
}
