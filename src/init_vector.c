/*
** EPITECH PROJECT, 2025
** init_vector
** File description:
** create vector_t type in heap and return pointer result
*/

#include <stdlib.h>
#include "project.h"

vector_t *init_vector(size_t len, size_t element_size)
{
    vector_t *vec = malloc(sizeof(vector_t));

    if (!vec)
        return NULL;
    vec->len = len;
    vec->size = 0;
    vec->data = malloc(element_size * len);
    vec->element_size = element_size;
    if (!vec->data)
        return NULL;
    my_memset(vec->data, 0, vec->element_size * vec->len);
    return vec;
}
