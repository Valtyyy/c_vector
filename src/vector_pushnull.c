/*
** EPITECH PROJECT, 2025
** vector_addlen
** File description:
** add null filled data
*/

#include "c_vector.h"
#include "project.h"
#include <stddef.h>
#include <stdint.h>

void vector_pushnull(vector_t *self)
{
    vector_push(self, &(uint8_t){0});
    my_memset(self->data + (vector_size(self) - self->element_size), 0,
        self->element_size);
}
