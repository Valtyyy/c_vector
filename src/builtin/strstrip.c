/*
** EPITECH PROJECT, 2025
** string_strip
** File description:
** remove given char in string, return res
*/

#include "project.h"

char *strstrip(char *src, char *filter)
{
    int src_len = my_strlen(src) + 1;
    char copy[src_len];
    ssize_t j = 0;

    my_memset(copy, 0, src_len);
    my_strcpy(copy, src);
    my_memset(src, 0, src_len);
    for (ssize_t i = 0; copy[i] != 0; i++) {
        if (my_str_contain(filter, copy[i]))
            continue;
        src[j] = copy[i];
        j += 1;
    }
    return src;
}
