/*
** EPITECH PROJECT, 2025
** struct
** File description:
** interface for struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <stdlib.h>

/* len = size * element_size */
typedef struct {
    ssize_t size;
    ssize_t element_size;
    ssize_t len;
    void *data;
} vector_t;

#endif
