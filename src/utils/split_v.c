/*
** EPITECH PROJECT, 2025
** split_v
** File description:
** split string by given filter and return vector_t (data->char**)
*/

#include "c_vector.h"
#include "project.h"

static float splitter_mode(char *src, ssize_t index, char *filtre,
    split_mode_v_t mode)
{
    if (mode == STRICT_V)
        return src[index] == '\0' ||
            my_str_contain(filtre, src[index]);
    if (mode == LEGACY_V)
        return src[index] == '\0' ||
            (my_str_contain(filtre, src[index]) &&
            !my_str_contain(filtre, src[index + 1]));
    return 0;
}

vector_t *split_v(char *src, char *filtre, split_mode_v_t mode)
{
    vector_t *res = init_vector(4, sizeof(char *));
    char buffer[4096] = {0};
    ssize_t j = 0;
    ssize_t strlen = my_strlen(src) + 1;
    char *buffer_heap = NULL;

    for (ssize_t i = 0; i < strlen; ++i) {
        if (splitter_mode(src, i, filtre, mode)) {
            buffer[j] = 0;
            strstrip(buffer, filtre);
            buffer_heap = my_strdup(buffer);
            vector_push(res, &buffer_heap);
            j = 0;
            continue;
        }
        buffer[j] = src[i];
        j += 1;
    }
    return res;
}
