/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** A function that display a char
*/

#include <unistd.h>
void my_putchar(char c)
{
    write(1, &c, 1);
}
