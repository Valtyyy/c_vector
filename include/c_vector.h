/*
** EPITECH PROJECT, 2025
** c_vector
** File description:
** interface for c_vector lib
*/

#ifndef C_VECTOR_H_
    #define C_VECTOR_H_
    #include <stdlib.h>
    #define V_AUTOFREE __attribute__((cleanup(vector_destroy_fixed)))
    #define VH_AUTOFREE __attribute__((cleanup(vector_destroy_ptr_fixed)))

typedef struct {
    ssize_t size;
    ssize_t element_size;
    ssize_t len;
    void *data;
} vector_t;

typedef enum {
    LEGACY_V = 0,
    STRICT_V = 1,
} split_mode_v_t;

vector_t *init_vector(ssize_t len, ssize_t element_size);
ssize_t vector_push(vector_t *vector, const void *element);
void *vector_at(vector_t *vector, ssize_t index);
void vector_destroy(vector_t *src);
void vector_clear(vector_t *vector);
void vector_pop(vector_t *vector);
int vector_erase(vector_t *vector, ssize_t index);
ssize_t vector_size(vector_t *vector);
ssize_t vector_maxsize(vector_t *vector);
void vector_destroy_fixed(vector_t **src);
ssize_t vector_search(vector_t *vector, void *target);
void vector_destroy_ptr_fixed(vector_t **self);
vector_t *vector_duplicate(vector_t *self);
int vector_popback(vector_t *self);

#endif
