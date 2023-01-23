/*
** EPITECH PROJECT, 2023
** free char arr size .c
** File description:
** function that free a char ** if we know the size.
*/

#include <stdlib.h>

char **free_tab_char_size(char **tab, int size)
{
    for (int i = 0; i <= size; i++)
        free(tab[i]);
    free(tab);
    return NULL;
}
