/*
** EPITECH PROJECT, 2022
** free.c
** File description:
** function that free arr int and float
*/

#include <stdlib.h>

void free_arr_int(int **arr)
{
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}

void free_arr_float(float **arr)
{
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}

int get_size_arr_int(int **arr)
{
    int size = 0;

    for (; arr[size] != NULL; size++);

    return size;
}

int get_size_arr_float(float **arr)
{
    int size = 0;

    for (; arr[size] != NULL; size++);

    return size;
}
