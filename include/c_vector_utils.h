/*
** EPITECH PROJECT, 2025
** c_vector_utils
** File description:
** interface for utils
*/

#ifndef HEADER_H_
    #define HEADER_H_
    #include "c_vector.h"

vector_t *split_v(char const *src, char const *filtre, split_mode_v_t mode);
vector_t *split_array_v(vector_t *src, const char *separators);

#endif
