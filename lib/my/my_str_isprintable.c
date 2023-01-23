/*
** EPITECH PROJECT, 2022
** my str is printable
** File description:
** a function that returns 1 if the string passed as parameter only contains
** alphabetical characters and 0 if the string
** contains another type of character.
*/

int not_printable(char str)
{
    if (str < 32 || str > 126) {
        return 1;
    }
    return 0;
}

int my_str_isprintable(char const *str)
{
    int i = 0;
    if (str[i] == '\0')
        return 1;

    while (str[i] != '\0') {
        if (not_printable(str[i]) == 1) {
            return 0;
        }
        i++;
    }
    return 1;
}
