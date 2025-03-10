/*
** EPITECH PROJECT, 2025
** vector_popback
** File description:
** delete first element of a vector
*/

#include "c_vector.h"

int vector_popback(vector_t *self)
{
    return vector_erase(self, 0);
}
