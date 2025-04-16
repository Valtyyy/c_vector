/*
** EPITECH PROJECT, 2025
** my_memcmp
** File description:
** compare byte par byte two block's memory, return trye if equal else false
*/

#include <stdbool.h>
#include <stdio.h>
#include <sys/types.h>

bool my_memcmp(void *ptr_a, void *ptr_b, size_t size)
{
    unsigned char *a = (unsigned char *)ptr_a;
    unsigned char *b = (unsigned char *)ptr_b;

    for (size_t i = 0; i < size; i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
