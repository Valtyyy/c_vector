/*
** EPITECH PROJECT, 2025
** splitdup
** File description:
** duplicate vector_t[char *]
*/

#include "c_vector.h"
#include "project.h"
#include <stddef.h>

const void *my_strdup_wrapper(void *src)
{
    return my_strdup((const char *)src);
}

vector_t *splitarray_dup(vector_t *src)
{
    vector_t *cpy = init_vector(1, sizeof(vector_t *));
    vector_t **curr = VECTOR_DATA(src, vector_t *);
    vector_t *buff = NULL;

    for (ssize_t i = 0; i < src->size; i++) {
        buff = vector_duplicate(curr[i], my_strdup_wrapper);
        if (!buff)
            return NULL;
        vector_push(cpy, &buff);
    }
    return cpy;
}
