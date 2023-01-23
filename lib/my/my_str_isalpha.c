/*
** EPITECH PROJECT, 2022
** my str is alpha
** File description:
** a function that returns 1 if the string passed as parameter only contains
** alphabetical characters and 0 if the string
** contains another type of character.
*/

int not_uppercase(char str)
{
    if ((str < 'a' && str > 'Z') || str > 'z') {
        return 1;
    }
    return 0;
}

int not_case(char str)
{
    if (str < 'A' || (str > 'Z' && str < 'a') || not_uppercase(str)) {
        return 1;
    }
    return 0;
}

int my_str_isalpha(char const *str)
{
    int i = 0;
    if (str[i] == '\0')
        return 1;

    while (str[i] != '\0') {
        if (not_case(str[i]) == 1) {
            return 0;
        }
        i++;
    }
    return 1;
}
