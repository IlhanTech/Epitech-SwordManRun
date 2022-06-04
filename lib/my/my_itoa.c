/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-evalexpr-ilhan.neuville
** File description:
** my_itoa
*/

#include "../../include/my.h"

int calc_size(int nb, int stock, int size)
{
    stock = nb;

    while (stock >= 10) {
        stock = stock % 10;
        size++;
    }
}

char *my_itoa(int nb)
{
    int stock = nb;
    int stock2 = nb;
    int size = 1;
    char *str;
    int i = 0;
    calc_size(nb, stock, size);
    if (nb == 0) {
        str = "0";
        return (str);
    }
    str = malloc(sizeof(char) * (size) + 1);
    for (; nb > 0; i++) {
        stock2 = nb % 10;
        nb /= 10;
        str[i] = stock2 + 48;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}
