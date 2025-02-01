/*
** EPITECH PROJECT, 2025
** vector_clear
** File description:
** clear all data in a vector_t
*/

#include "struct.h"
#include "project.h"

void vector_clear(vector_t *vector)
{
    my_memset(vector->data, 0, vector->element_size * vector->len);
}
