/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** return length of char*
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return i;
}
