/*
** EPITECH PROJECT, 2022
** MY_ISNEG
** File description:
** A function that, beginning with a,
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
        return 0;
    } else {
        my_putchar('N');
        }
    return 1;
}
