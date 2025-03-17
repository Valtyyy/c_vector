/*
** EPITECH PROJECT, 2025
** split_array_v
** File description:
** split a vector_t[char **] in sub vector_t[char **] by separator
** return a new vector_t (duplicated)
*/

#include "c_vector.h"
#include "project.h"
#include <stddef.h>
#include <stdio.h>

static int add_string(vector_t *src, char *string, const char separator)
{
    char *cpy = my_strdup(string);
    char sep[2] = {0};

    sep[0] = separator;
    if (!cpy)
        return FAIL;
    strstrip(cpy, sep);
    if (*cpy == 0)
        return SUCCESS;
    vector_push(src, &cpy);
    return SUCCESS;
}

static int add_sub(vector_t *src, vector_t *sub)
{
    vector_t *dup = vector_duplicate(sub, NULL);

    if (!dup)
        return SUCCESS;
    vector_push(src, &dup);
    return SUCCESS;
}

vector_t *split_array_v(vector_t *src, const char separator)
{
    vector_t *splitted = init_vector(1, sizeof(vector_t *));
    char **strings = VECTOR_DATA(src, char *);
    V_AUTOFREE vector_t *sub = init_vector(1, sizeof(char *));

    if (!splitted || !src)
        return NULL;
    for (ssize_t i = 0; i < src->size; i++) {
        if (!strings[i]) {
            vector_clear(sub);
            continue;
        }
        add_string(sub, strings[i], separator);
        if (my_str_contain(strings[i], separator) == 1) {
            add_sub(splitted, sub);
            vector_clear(sub);
        }
    }
    if (sub->size > 0)
        add_sub(splitted, sub);
    return splitted;
}
