/*
** EPITECH PROJECT, 2025
** vector_destroy_ptr_fixed
** File description:
** iterate vector->data as **int and free each ptr
*/

#include "c_vector.h"
#include "project.h"
#include <stddef.h>

void vector_destroy_ptr_fixed(vector_t **self)
{
    vector_t *self_fixed = *self;
    int **ptr = (int **)self_fixed->data;

    for (size_t i = 0; i < self_fixed->size; i++)
        free(ptr[i]);
    vector_destroy(self_fixed);
}
