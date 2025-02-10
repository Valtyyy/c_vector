/*
** EPITECH PROJECT, 2025
** vector_push
** File description:
** add element at end of a vector_t and return index
*/

#include <stdlib.h>
#include "project.h"
#include "c_vector.h"

ssize_t vector_push(vector_t *vector, void *element)
{
    void *dest = NULL;

    if (vector->size >= vector->len) {
        vector->data = my_realloc(vector->data,
            vector->element_size * vector->len,
            vector->element_size * vector->len * 2);
        if (!vector->data)
            return -1;
        vector->len *= 2;
    }
    dest = vector->data + (vector->element_size * vector->size);
    my_memcpy(dest, element, vector->element_size);
    vector->size += 1;
    return (vector->size - 1);
}
