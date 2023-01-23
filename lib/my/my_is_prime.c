/*
** EPITECH PROJECT, 2022
** my is prime
** File description:
** a function that returns 1 if the number is prime and 0 if not.
*/

int my_is_prime(int nb)
{
    if (nb <= 1){
        return 0;
    }
    for (int i = 2; i < nb - 1; i++) {
        if (nb % i == 0 && i != 1)
            return 0;
    }
    return 1;
}
