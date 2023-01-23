/*
** EPITECH PROJECT, 2022
** my str is upper
** File description:
** a function that returns 1 if the string passed as parameter only contains
** alphabetical characters and 0 if the string
** contains another type of character.
*/

int not_uppercase2(char str)
{
    if (str < 'A' || str > 'Z') {
        return 1;
    }
    return 0;
}

int my_str_isupper(char const *str)
{
    int i = 0;
    if (str[i] == '\0')
        return 1;

    while (str[i] != '\0') {
        if (not_uppercase2(str[i]) == 1) {
            return 0;
        }
        i++;
    }
    return 1;
}
