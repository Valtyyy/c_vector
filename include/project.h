/*
** EPITECH PROJECT, 2025
** project
** File description:
** interface for relative project
*/

#ifndef CVECTOR_PROJECT_H_
    #define CVECTOR_PROJECT_H_
    #include "c_vector.h"
    #include <stdbool.h>

int my_memcpy(void *dest, const void *src, size_t size);
void my_memset(void *ptr, int value, size_t count);
void *my_realloc(void *ptr, size_t size, size_t new_size);
bool my_memcmp(void *ptr_a, void *ptr_b, size_t size);
int my_str_contain(char const *src, char const target);
int my_strlen(char const *str);
char *strstrip(char *src, char const *filter);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
int my_strncmp(char const *s1, char const *s2, size_t n);

typedef enum {
    FAIL = 84,
    SUCCESS = 0
} state_t;

#endif
