/*
** EPITECH PROJECT, 2025
** my_memset
** File description:
** set memory area to given value at src addr
*/

#include <stdlib.h>

void my_memset(void *ptr, int value, size_t count)
{
    unsigned char *ptr_ = (unsigned char *)ptr;

    for (size_t i = 0; i < count; i++) {
        ptr_[i] = value;
    }
}
