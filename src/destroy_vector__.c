/*
** EPITECH PROJECT, 2025
** destroy_vector
** File description:
** destroy vector_t
*/

#include "c_vector.h"
#include "struct.h"

void vector_destroy__(vector_t **src)
{
    vector_destroy(*src);
}
