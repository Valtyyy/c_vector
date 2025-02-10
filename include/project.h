/*
** EPITECH PROJECT, 2025
** project
** File description:
** interface for relative project
*/

#ifndef PROJECT_H_
    #define PROJECT_H_
    #include <stdlib.h>

typedef struct {
    ssize_t size;
    ssize_t element_size;
    ssize_t len;
    void *data;
} vector_t;

int my_memcpy(void *dest, void *src, ssize_t size);
void my_memset(void *ptr, int value, size_t count);
void *my_realloc(void *ptr, ssize_t size, ssize_t new_size);
void vector_destroy_fixed(vector_t **src);

typedef enum {
    FAIL = 84,
    SUCCESS = 0
} state_t;

#endif
