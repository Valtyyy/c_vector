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

void add_content_handler(vector_t *vec, char *src)
{
    char *copy = NULL;

    if (*src == 0)
        return;
    copy = my_strdup(src);
    if (!copy)
        return;
    vector_push(vec, &copy);
}

vector_t *split_v(char *src, char *filtre, split_mode_v_t mode)
{
    vector_t *res = init_vector(4, sizeof(char *));
    char buffer[4096] = {0};
    ssize_t j = 0;
    ssize_t strlen = my_strlen(src) + 1;

    for (ssize_t i = 0; i < strlen; ++i) {
        if (splitter_mode(src, i, filtre, mode)) {
            buffer[j] = 0;
            strstrip(buffer, filtre);
            add_content_handler(res, buffer);
            j = 0;
            continue;
        }
        buffer[j] = src[i];
        j += 1;
    }
    return res;
}
