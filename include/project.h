/*
** EPITECH PROJECT, 2025
** project
** File description:
** interface for relative project
*/

#ifndef PROJECT_H_
    #define PROJECT_H_
    #include <stdlib.h>
    #include "struct.h"

int my_memcpy(void *dest, void *src, ssize_t size);
void my_memset(void *ptr, int value, size_t count);
void *my_realloc(void *ptr, ssize_t size, ssize_t new_size);
void vector_destroy__(vector_t **src);

#endif
