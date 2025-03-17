/*
** EPITECH PROJECT, 2025
** splitdup
** File description:
** duplicate vector_t[char *]
*/

#include "c_vector.h"
#include "c_vector_dup.h"
#include "project.h"

const void *my_strdup_wrapper(void *src)
{
    return my_strdup((const char *)src);
}

const void *splitarray_dup(void *src)
{
    vector_t *vec = (vector_t *)src;
    vector_t *cpy = vector_duplicate(vec, my_strdup_wrapper);

    return cpy;
}
