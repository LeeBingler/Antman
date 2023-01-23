/*
** EPITECH PROJECT, 2023
** len_int.c
** File description:
** return the len of an int
*/

#include <stdio.h>

int len_int(int number)
{
    int len = number < 0 ? 1 : 0;
    int i = (number < 0) ? (number * (-1)) : number;

    if (number == 0)
        return 1;

    for (; i != 0; len++)
        i /= 10;
    return len;
}
