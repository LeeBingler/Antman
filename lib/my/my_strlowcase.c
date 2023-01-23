/*
** EPITECH PROJECT, 2022
** my strupcase
** File description:
** a function that puts every letter of every word in it in uppercase.
*/

char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);

char *my_strlowcase(char *str)
{
    int i = 0;
    char substitut[my_strlen(str)];
    my_strcpy(substitut, str);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}
