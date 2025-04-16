/*
** EPITECH PROJECT, 2025
** vector_size
** File description:
** return the real size in memory taken by filled vector data
*/

#include <stdlib.h>
#include "c_vector.h"

size_t vector_size(vector_t *vector)
{
    return vector->element_size * vector->size;
}
