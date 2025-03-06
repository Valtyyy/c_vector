/*
** EPITECH PROJECT, 2025
** project
** File description:
** interface for relative project
*/

#ifndef PROJECT_H_
    #define PROJECT_H_
    #include "c_vector.h"
    #include <stdlib.h>
    #include <stdbool.h>

int my_memcpy(void *dest, const void *src, ssize_t size);
void my_memset(void *ptr, int value, size_t count);
void *my_realloc(void *ptr, ssize_t size, ssize_t new_size);
bool my_memcmp(void *ptr_a, void *ptr_b, ssize_t size);
int my_str_contain(char const *src, char const target);
int my_strlen(char const *str);
char *strstrip(char *src, char const *filter);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);

typedef enum {
    FAIL = 84,
    SUCCESS = 0
} state_t;

#endif
