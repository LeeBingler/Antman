/*
** EPITECH PROJECT, 2022
** my str capitalize
** File description:
** a function that capitalizes the first letter of each word.
*/

int verif_sign(char str)
{
    if (str == ' ' || str == '+' || str == '-') {
        return 1;
    }
    return 0;
}

int verif_lowercase(char str)
{
    if (str <= 'z' && str >= 'a') {
        return 1;
    }
    return 0;
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (verif_lowercase(str[i])) {
        str[i] -= 32;
        }
    i = 1;
    while (str[i] != '\0') {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            str[i] += 32;
        }
        if (verif_sign(str[i - 1]) && verif_lowercase(str[i])) {
            str[i] -= 32;
        }
        i++;
    }
    return str;
}
