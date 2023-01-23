/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** function that reverses a string.
*/

int my_strlen (char const * str);

char *my_revstr(char * str)
{
    int end_char = my_strlen(str) - 1;
    int loop = my_strlen(str);
    char substitut_str[end_char];
    int i = 0;

    while (str[i] != '\0') {
        substitut_str[i] = str[i];
        i++;
    }

    substitut_str[i] = '\0';

    for (int i = 0; i < loop; i++) {
        str[i] = substitut_str[end_char];
        end_char--;
    }
    return str;
}
