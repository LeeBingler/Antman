/*
** EPITECH PROJECT, 2022
** my str is num
** File description:
** a function that returns 1 if the string passed as parameter only contains
** digits characters and 0 if the string
** contains another type of character.
*/

#include <stddef.h>

int not_num(char str)
{
    if (str < '0' || str > '9') {
        return 1;
    }
    return 0;
}

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str == NULL || str[i] == '\0')
        return 0;

    for (;str[i] != '\0'; i++) {
        if ((str[i] == '-' || str[i] == '+'))
            i++;
        if (not_num(str[i]) == 1)
            return 0;
    }
    return 1;
}
