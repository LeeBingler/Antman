/*
** EPITECH PROJECT, 2022
** MY_GETNBR
** File description:
** A function that returns a number, sent to the function as a string.
*/

int my_strlen (char const * str);

int count_signe(char *str, int len_str)
{
    int count = 0;

    for (int i = 0; i < len_str; i++) {
        if (str[i] == '-'){
            count++;
        }
    }

    if (count % 2 == 0)
        return 1;
    if (count % 2 == 1)
        return -1;
    return 0;
}

int my_getnbr(char *str)
{
    int nb = 0;

    for (int i = 0; i < my_strlen(str) + 1; i++) {
        if (str[i] <= '9' && str[i] >= '0') {
            nb = (nb + (str[i] - '0')) * 10;
        }

        if (str[i] == '-' || str[i] == '+' || (str[i] < '9' && str[i] > '0'))
            continue;

        if (str[i] < '0' || str[i] > '9' || str[i] == '\0') {
            return count_signe(str, i) * (nb / 10);
        }
    }
    return -1;
}
