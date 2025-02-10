/*
** EPITECH PROJECT, 2025
** vector_destroy
** File description:
** destroy vector_t in memory
*/

#include <stdlib.h>
#include "c_vector.h"

void vector_destroy(vector_t *src)
{
    if (!src)
        return;
    free(src->data);
    free(src);
}
