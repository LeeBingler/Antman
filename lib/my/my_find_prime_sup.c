/*
** EPITECH PROJECT, 2022
** my find prime sup
** File description:
** a function that returns the smallest prime number that is greater than,
** or equal to, the number given as a parameter.
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int ok = 0;
    int count = 0;
    if (nb >= 2147483647)
        return 0;
    while (ok != 1) {
        if (my_is_prime (nb + count) == 1)
            return nb + count;

        count++;
    }
    return 3;
}
