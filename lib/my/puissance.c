/*
** EPITECH PROJECT, 2022
** puissance.c
** File description:
** make a number power
*/

float puissance(int nb, int puis)
{
    int nbr = nb;
    float nbr_float = 1;
    if (puis > 0){
        for (int i = 1; i < puis; i++){
            nbr *= nb;
        }
        return nbr;
    }
    if (puis < 0){
        puis *= -1;
        for (int i = 1; i <= puis; i++){
            nbr_float /= nb;
        }
        return nbr_float;
    }
    return 1;
}
