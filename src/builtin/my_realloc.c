/*
** EPITECH PROJECT, 2025
** my_realloc
** File description:
** alloc in heap, copy given element in new ptr allocation & free old ptr
*/

#include <stdlib.h>
#include "project.h"

void *my_realloc(void *ptr, ssize_t size, ssize_t new_size)
{
    void *new = malloc(new_size);

    if (!new)
        return NULL;
    my_memcpy(new, ptr, size);
    free(ptr);
    return new;
}
