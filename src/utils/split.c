/*
** EPITECH PROJECT, 2025
** split
** File description:
** split string by given filter and return vector_t (data->char**)
*/

#include "c_vector.h"
#include "project.h"

static float splitter_mode(char *src, ssize_t index, char *filtre,
    vsplit_mode_t mode)
{
    if (mode == STRICT)
        return src[index] == '\0' ||
            my_str_contain(filtre, src[index]);
    if (mode == LEGACY)
        return src[index] == '\0' ||
            (my_str_contain(filtre, src[index]) &&
            !my_str_contain(filtre, src[index + 1]));
    return 0;
}

vector_t *split(char *src, char *filtre, vsplit_mode_t mode)
{
    vector_t *res = init_vector(4, sizeof(char *));
    char buffer[4096] = {0};
    ssize_t j = 0;
    ssize_t strlen = my_strlen(src) + 1;

    for (ssize_t i = 0; i < strlen; ++i) {
        if (splitter_mode(src, i, filtre, mode)) {
            buffer[j] = 0;
            strstrip(buffer, filtre);
            vector_push(res, &buffer);
            j = 0;
            continue;
        }
        buffer[j] = src[i];
        j += 1;
    }
    return res;
}
