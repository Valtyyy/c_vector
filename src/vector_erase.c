/*
** EPITECH PROJECT, 2025
** vecotr_erase
** File description:
** Remove element from a specific index
*/

#include "c_vector.h"
#include "struct.h"
#include "project.h"
#include <stdlib.h>

int vector_erase(vector_t *vector, ssize_t index)
{
    void *dest = NULL;
    void *data_to_move = malloc(vector->element_size * vector->len);

    if (!data_to_move)
        return FAIL;
    if (index == vector->size - 1) {
        vector_pop(vector);
        return SUCCESS;
    }
    if (index >= vector->size)
        return SUCCESS;
    dest = vector->data + (vector->element_size * index);
    my_memcpy(data_to_move, dest + vector->element_size,
        vector->element_size * (vector->len - index));
    my_memset(dest, 0, vector->element_size *(vector->len - index));
    my_memcpy(dest, data_to_move,
        vector->element_size * (vector->len - index));
    vector->size -= 1;
    free(data_to_move);
    return SUCCESS;
}
