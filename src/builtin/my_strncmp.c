/*
** EPITECH PROJECT, 2025
** my_strncmp
** File description:
** cmp two given string until n
*/

#include "project.h"
#include <stddef.h>

int my_strncmp(char const *s1, char const *s2, size_t n)
{
    for (size_t i = 0; s1[i] != 0 && s2[i] != 0 && i < n; i++) {
        if (s1[i] != s2[i])
            return 1;
    }
    return 0;
}
