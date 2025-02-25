/*
** EPITECH PROJECT, 2024
** ghgh
** File description:
** uiui
*/

#include <stdlib.h>
#include "project.h"

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *res = malloc(sizeof(char) * len + 1);

    if (!res)
        return NULL;
    my_strcpy(res, src);
    return res;
}
