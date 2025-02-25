/*
** EPITECH PROJECT, 2024
** my_str_contain
** File description:
** check if str contain char
*/

int my_str_contain(char const *src, char const target)
{
    for (int i = 0; src[i] != '\0'; i++){
        if (src[i] == target)
            return 1;
    }
    return 0;
}
