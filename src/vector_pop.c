/*
** EPITECH PROJECT, 2025
** vector_pop
** File description:
** delete last element of the vector
*/

#include "struct.h"
#include "project.h"

void vector_pop(vector_t *vector)
{
    vector_t *dest = vector->data + (vector->element_size
        * (vector->size - 1));

    my_memset(dest, 0, vector->element_size);
    vector->size -= 1;
}
