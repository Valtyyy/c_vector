/*
** EPITECH PROJECT, 2025
** split_array_str_v
** File description:
** split string array once by given separators, secondly by given string
*/

#include "c_vector.h"
#include "c_vector_utils.h"
#include "project.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

static int add_sub(vector_t *src, vector_t *sub)
{
    vector_t *sub_dup = NULL;

    if (sub->size == 0)
        return SUCCESS;
    sub_dup = vector_duplicate(sub, NULL);
    if (!sub_dup)
        return FAIL;
    vector_push(src, &sub_dup);
    vector_clear(sub);
    return SUCCESS;
}

static int add_string(vector_t *src, vector_t *str)
{
    char *string = VECTOR_DATA(str, char);

    if (string && *string == 0)
        return SUCCESS;
    vector_push(str, &(char){'\0'});
    string = my_strdup(str->data);
    if (!string)
        return FAIL;
    vector_push(src, &string);
    vector_clear(str);
    return SUCCESS;
}

static int str_index_of(char *src, char const **targets, size_t *len)
{
    int found = 0;
    size_t targets_len = 0;

    for (size_t i = 0; targets[i] != NULL; i++) {
        targets_len = my_strlen(targets[i]);
        found = my_strncmp(src, targets[i], targets_len);
        if (found == 0) {
            *len = targets_len;
            return 0;
        }
    }
    return -1;
}

static void deal_matrix(char *matrix, const char **separators, vector_t *sub,
    vector_t *splitted)
{
    V_AUTOFREE vector_t *str_buff = init_vector(1, sizeof(char));
    size_t len = 0;
    int index = 0;

    for (size_t i = 0; matrix[i] != 0; i++) {
        index = str_index_of(&matrix[i], separators, &len);
        if (index == -1) {
            vector_push(str_buff, &matrix[i]);
            continue;
        }
        add_string(sub, str_buff);
        i += len <= 0 ? len : len - 1;
        add_sub(splitted, sub);
    }
    if (str_buff->size > 0)
        add_string(sub, str_buff);
}

// src : vector_t[char *]
vector_t *split_array_str_v(vector_t *src, const char **separators)
{
    vector_t *splitted = init_vector(1, sizeof(vector_t *));
    V_AUTOFREE vector_t *sub = init_vector(1, sizeof(vector_t *));

    if (!splitted || !sub)
        return NULL;
    for (size_t i = 0; i < src->size; i++)
        deal_matrix(VECTOR_DATA(src, char *)[i], separators, sub, splitted);
    if (sub->size > 0)
        add_sub(splitted, sub);
    return splitted;
}
