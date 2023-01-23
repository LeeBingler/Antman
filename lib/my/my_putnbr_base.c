/*
** EPITECH PROJECT, 2022
** my pur nbr base
** File description:
** a function that converts and displays a decimal number
** into a number in a given base.
*/

int my_strlen(char const *str);
void my_putchar(char c);

int my_putnbr_base(int nbr, char const *base)
{
    int reste = 0;
    int diviseur = my_strlen(base);
    reste = nbr % diviseur;

    if (nbr < 0) {
        my_putchar (45);
        my_putnbr_base((-1) * nbr, base);
        return 0;
    } else if (nbr / diviseur) {
        my_putnbr_base(nbr /= diviseur , base);
    }
    my_putchar (base[reste]);
    return 1;
}
