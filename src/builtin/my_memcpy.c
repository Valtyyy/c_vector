/*
** EPITECH PROJECT, 2025
** my_memcpy
** File description:
** copy memory area of src into dest
*/

#include "stdlib.h"

int my_memcpy(void *dest, const void *src, size_t size)
{
    unsigned char *dest_octal = (unsigned char *)dest;
    unsigned char *src_octal = (unsigned char *)src;

    if (!dest || !src)
        return 1;
    for (size_t i = 0; i < size; i++)
        dest_octal[i] = src_octal[i];
    return 0;
}
