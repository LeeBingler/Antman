/*
** EPITECH PROJECT, 2022
** my_str_isfloat.c
** File description:
** function that return 1 if the number is a float and 0 is not.
*/

#include "my.h"
#include <stddef.h>

int my_str_isfloat(char const *str)
{
    int i;
    int nb_of_pt = 0;

    if (str == NULL || str[0] == '\0')
        return 0;
    i = str[0] == '-' ? 1 : 0;
    for (;i != '\0'; i++) {
        if ((str[i] < '0' && str[i] != '.') || str[i] > '9')
            return 0;
        if (str[i] == '.')
            nb_of_pt++;
        if (nb_of_pt > 1)
            return 0;
    }
    return 1;
}
