/*
** EPITECH PROJECT, 2022
** MY_PUT_NBR
** File description:
** A function
*/

void my_putchar(char c);

long my_putnbr(long nb)
{
    long reste = 0;
    char result;

    reste = nb % 10;
    result = '0' + reste;

    if (nb < 0) {
        my_putchar ('-');
        my_putnbr (-1 * nb);
        return 0;
    } else if (nb / 10) {
        my_putnbr (nb /= 10);
    }
    my_putchar (result);
    return 1;
}
