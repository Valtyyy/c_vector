/*
** EPITECH PROJECT, 2025
** my_strcmp
** File description:
** compare two given string
*/

#include "project.h"

int my_strcmp(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);

    if (len_s1 != len_s2)
        return 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}
