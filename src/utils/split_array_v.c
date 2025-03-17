/*
** EPITECH PROJECT, 2025
** split_array_v
** File description:
** split a vector_t[char **] in sub vector_t[char **] by separator
** return a new vector_t (duplicated)
*/

#include "c_vector.h"
#include "project.h"
#include <stddef.h>
#include <stdio.h>

static int add_string(vector_t *src, vector_t *str)
{
    char *string = NULL;

    vector_push(str, &(char){'\0'});
    string = my_strdup(str->data);
    if (!string)
        return FAIL;
    vector_push(src, &string);
    vector_clear(str);
    return SUCCESS;
}

static int add_sub(vector_t *src, vector_t *sub)
{
    vector_t *sub_dup = vector_duplicate(sub, NULL);

    if (!sub_dup)
        return FAIL;
    vector_push(src, &sub_dup);
    vector_clear(sub);
    return SUCCESS;
}

static void deal_matrix(char *matrix, vector_t *sub, vector_t *splitted,
    const char *separators)
{
    V_AUTOFREE vector_t *str_buff = init_vector(1, sizeof(char));

    for (ssize_t i = 0; matrix[i] != 0; i++) {
        if (!my_str_contain(separators, matrix[i])) {
            vector_push(str_buff, &matrix[i]);
            continue;
        }
        add_string(sub, str_buff);
        add_sub(splitted, sub);
    }
    if (str_buff->size > 0)
        add_string(sub, str_buff);
}

vector_t *split_array_v(vector_t *src, const char *separators)
{
    vector_t *splitted = init_vector(1, sizeof(vector_t *));
    V_AUTOFREE vector_t *sub = init_vector(1, sizeof(vector_t *));
    char **matrix = VECTOR_DATA(src, char *);

    if (!splitted || !src)
        return NULL;
    for (ssize_t i = 0; i < src->size; i++)
        deal_matrix(matrix[i], sub, splitted, separators);
    if (sub->size > 0)
        add_sub(splitted, sub);
    return splitted;
}
