/*
** EPITECH PROJECT, 2022
** my sort int array
** File description:
** sort int ascend
*/

void verif_min (int *array, int size, int i, int min)
{
    int swap = 0;
    for (int y = i; y < size; y++){
        if (min < array [y]){
            swap = min;
            min = array[y];
            array[y] = swap;
        }
    }
}

void my_sort_int_array(int *array, int size)
{
    int min = array[0];

    for (int i = 0; i < size; i++){
        verif_min(array , size, i, min);
        min = array[i];
        }
}
