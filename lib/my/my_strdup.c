/*
** EPITECH PROJECT, 2022
** my strdup
** File description:
** a function that allocates memory and copies
** the string given as argument in it.
*/
#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *str_cop;
    int len_src = my_strlen(src);

    str_cop = my_calloc(len_src + 1);
    for (int i = 0; i < len_src && str_cop != NULL; i++) {
        str_cop[i] = src[i];
    }
    return str_cop;
}
