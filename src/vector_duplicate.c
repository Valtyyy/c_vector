/*
** EPITECH PROJECT, 2025
** vector_duplicate
** File description:
** duplicate given vector, return duplicated as new memory allocated
*/

#include "c_vector.h"
#include "project.h"

vector_t *vector_duplicate(vector_t *self)
{
    vector_t *cpy = init_vector(self->len, self->element_size);

    cpy->size = self->size;
    my_memcpy(cpy->data, self->data, self->size * self->element_size);
    return cpy;
}
