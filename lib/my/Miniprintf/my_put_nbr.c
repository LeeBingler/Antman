/*
** EPITECH PROJECT, 2022
** MY_PUT_NBR
** File description:
** A function
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int reste = 0;
    char result;

    reste = nb % 10;
    result = '0' + reste;

    if (nb < 0) {
        my_putchar ('-');
        my_put_nbr (-1 * nb);
        return 0;
    } else if (nb / 10) {
        my_put_nbr (nb /= 10);
    }
    my_putchar (result);
}
