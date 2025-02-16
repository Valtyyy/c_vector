/*
** EPITECH PROJECT, 2025
** main
** File description:
** dev main
*/

#include <stdio.h>
#include <string.h>
#include "c_vector.h"

int main(void) 
{
    V_AUTOFREE vector_t *vector = init_vector(2, sizeof(int));
    V_AUTOFREE vector_t *string = init_vector(8, sizeof(char) * 32);
    V_AUTOFREE vector_t *foo = init_vector(16, sizeof(int));
    int *array_int = NULL;
    char (*array_string)[32];

    // for int
    vector_push(vector, &(int){9});
    vector_push(vector, &(int){96});
    vector_push(vector, &(int){80});
    vector_push(vector, &(int){8});

    // for string
    vector_push(string, (char *){"Hello world !"});
    vector_push(string, (char *){"Vector is amazing !!"});
    vector_push(string, (char *){"This will be deleted !"});
    vector_push(string, (char *){"Made by Valty."});
    vector_erase(string, 2);
    
    printf("string size -> %ld\nstring fullsize -> %ld\n", vector_size(string), vector_maxsize(string));

    // for foo
    for (int i = 0; i < 64; i++) {
        vector_push(foo, &(int){i});
    }

    array_int = foo->data;
    for (ssize_t i = 30; i <= 50; i++) {
        for (ssize_t j = 0; j < foo->size; j++)
            if (array_int[j] == i)
                vector_erase(foo, j);
    }

    // for int
    array_int = (int *) vector->data;
    for (ssize_t i = 0; i < vector->size; i++) {
        printf("%d\n", *(int *) vector_at(vector, i));
        printf("%d\n", array_int[i]);
    }

    // for string
    array_string = (char (*)[32]) string->data;
    for (ssize_t i = 0; i < string->size; i++) {
        printf("[%s]\n", (char *) vector_at(string, i));
        printf("[%s]\n", array_string[i]);
    }

    char to_found[32] = {0};
    strcpy(to_found, "Vector is amazing !!");
    printf("found -> [%ld]\n", vector_search(string, to_found));
    return 0;
}
