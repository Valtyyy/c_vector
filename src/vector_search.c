/*
** EPITECH PROJECT, 2025
** vector_search
** File description:
** compare byte per byte given value and value at given index in vector
** and return index of first value found
*/

#include "c_vector.h"
#include <project.h>
#include <stdio.h>
#include <stdlib.h>


size_t vector_search(vector_t *vector, void *target)
{
    void *curr = NULL;

    for (size_t i = 0; i < vector->size; i++) {
        curr = vector->data + (vector->element_size * i);
        if (my_memcmp(target, curr, vector->element_size))
            return i;
    }
    return -1;
}
