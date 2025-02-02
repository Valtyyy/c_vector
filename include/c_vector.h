/*
** EPITECH PROJECT, 2025
** c_vector
** File description:
** interface for c_vector lib
*/

#ifndef C_VECTOR_H_
    #define C_VECTOR_H_
    #include "project.h"
    #define V_AUTOFREE __attribute__((cleanup(vector_destroy_fixed)))

vector_t *init_vector(ssize_t len, ssize_t element_size);
ssize_t vector_push(vector_t *vector, void *element);
void *vector_at(vector_t *vector, ssize_t index);
void vector_destroy(vector_t *src);
void vector_clear(vector_t *vector);
void vector_pop(vector_t *vector);
int vector_erase(vector_t *vector, ssize_t index);
ssize_t vector_size(vector_t *vector);
ssize_t vector_maxsize(vector_t *vector);

#endif
