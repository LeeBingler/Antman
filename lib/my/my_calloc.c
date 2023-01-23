/*
** EPITECH PROJECT, 2022
** my calloc
** File description:
** function that allocate memory and make this memory at NULL
*/

#include <stdlib.h>

char *my_calloc(int size)
{
    char *str = (char *)malloc(sizeof(char) * size);
    for (int i = 0; i < size && str != NULL; i++)
        str[i] = 0;
    return str;
}

char **my_arr_calloc(int size_row, int size_col)
{
    char **str = (char **)malloc(sizeof(char *) * size_row);
    if (str == NULL)
        return NULL;
    str[size_row - 1] = NULL;
    for (int i = 0; i < size_row - 1 && str != NULL; i++) {
        str[i] = my_calloc(size_col + 1);
        if (str[i] == NULL) return NULL;
    }
    return str;
}

void free_arr(char **str)
{
    int size_row = 0;
    for (; str[size_row] != NULL; size_row++);
    for (int i = 0; i < size_row && str != NULL; i++)
        free(str[i]);
    free(str);
}
