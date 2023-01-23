/*
** EPITECH PROJECT, 2022
** my compute square root
** File description:
** a function that returns the square root (if it is a whole number)
** of the number given as argument.
*/

int my_compute_square_root(int nb)
{
    if (nb >= 2147483646)
        return 0;
    for (int i = 0; i < 46341; i++){
        if (i * i == nb)
            return i;
    }
    return 0;
}
