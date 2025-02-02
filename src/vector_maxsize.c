/*
** EPITECH PROJECT, 2025
** vector_maxsize
** File description:
** return the literal size in memory taken by vector->data
*/

#include "struct.h"

ssize_t vector_maxsize(vector_t *vector)
{
    return vector->element_size * vector->len;
}
