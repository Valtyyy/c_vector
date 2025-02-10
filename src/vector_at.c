/*
** EPITECH PROJECT, 2025
** vector_at
** File description:
** take an index and return corresponding addr
*/

#include <stdio.h>
#include "c_vector.h"

void *vector_at(vector_t *vector, ssize_t index)
{
    return vector->data + (vector->element_size * index);
}
