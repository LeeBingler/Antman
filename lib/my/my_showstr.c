/*
** EPITECH PROJECT, 2022
** my showstr
** File description:
** show str
*/

void my_putchar(char c);

int my_showstr(char const *str)
{
    int a = 0;
    my_putchar(str[0]);
    a++;
    return a;
}
