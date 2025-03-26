/*
** EPITECH PROJECT, 2025
** my_strncpy
** File description:
** hh
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n; i++) {
        if (n < i) {
            dest[i] = '\0';
            return dest;
        }
        dest[i] = src[i];
    }
    return dest;
}
