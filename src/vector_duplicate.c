/*
** EPITECH PROJECT, 2025
** vector_duplicate
** File description:
** duplicate given vector, return duplicated as new memory allocated
*/

#include "c_vector.h"
#include "project.h"
#include <stddef.h>
#include <stdio.h>

void duplicate_data(vector_t *self, vector_t *cpy)
{
    cpy->size = self->size;
    my_memcpy(cpy->data, self->data, self->size * self->element_size);
}

void duplicate_data_from_func(vector_t *self, vector_t *cpy,
    const void *(*duplicate)(void *))
{
    void *curr = NULL;
    const void *new_ptr = NULL;

    for (ssize_t i = 0; i < self->size; i++) {
        curr = *(void **)vector_at(self, i);
        new_ptr = duplicate(curr);
        vector_push(cpy, &new_ptr);
    }
}

vector_t *vector_duplicate(vector_t *self, const void *(*duplicate)(void *))
{
    vector_t *cpy = init_vector(self->len, self->element_size);

    if (!duplicate)
        duplicate_data(self, cpy);
    else
        duplicate_data_from_func(self, cpy, duplicate);
    return cpy;
}
