/*
** EPITECH PROJECT, 2025
** c_vector
** File description:
** interface for c_vector lib
*/

#ifndef C_VECTOR_H_
    #define C_VECTOR_H_
    #include "struct.h"
#include <stdio.h>

vector_t *init_vector(ssize_t len, ssize_t element_size);
ssize_t vector_push(vector_t *vector, void *element);
void *vector_at(vector_t *vector, ssize_t index);

#endif
