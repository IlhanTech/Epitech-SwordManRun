/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-star-ilhan.neuville
** File description:
** my_getnbr
*/

#include "../../include/my.h"

int var(int tmp, int nb)
{
    int res = 1;

    if (tmp == 0)
        return (1);
    while (tmp > 0) {
        res = res * nb;
        tmp = tmp - 1;
    }
    return (res);
}

int my_getnbr(char const *str)
{
    int j = 0;
    int end = 0;

    while(str[j] != '\0') {
        j++;
    }
    j = j - 1;

    for (int i = 0; str[i] != '\0'; i++) {
        end += ((int) str[i] - 48) * var(j, 10);
        j = j - 1;
    }
    if (end < -1073741823 || end > 1073741823)
        return (0);
    return (end);
}