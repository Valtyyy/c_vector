/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** strstr
*/

#include <stddef.h>
#include <stdbool.h>
#include "project.h"

char *my_strstr(char *str, char const *to_find)
{
    size_t find_len = my_strlen(to_find);
    size_t j = 0;

    if (find_len == 0)
        return str;
    for (size_t i = 0; str[i] != 0; i++) {
        j = 0;
        while (j < find_len && str[i + j] == to_find[j])
            j++;
        if (j == find_len)
            return &str[i];
    }
    return NULL;
}
