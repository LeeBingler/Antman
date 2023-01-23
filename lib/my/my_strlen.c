/*
** EPITECH PROJECT, 2022
** MY_STRLEN
** File description:
** A function that counts and returns the number of characters
** found in the string passed as parameter.
*/
#include <stddef.h>

int my_strlen (char const * str)
{
    int i = 0;
    if (str == NULL)
        return 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
