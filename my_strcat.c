/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** 
*/

int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c = c + 1;
    }
    return (c);
}

char *my_strcat(char *dest , char  const *src)
{
    int i = 0;
    int c = my_strlen(dest);

    while (src[i] != '\0') {
        dest[c] = src[i];
        c = c + 1;
        i = i + 1;
    }
    dest[c] = '\0';
    return (dest);
}
