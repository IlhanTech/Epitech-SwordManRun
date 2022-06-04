/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday07-ilhan.neuville
** File description:
** my_put_nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int stock = 0;

    if (nb == 10)
        my_putchar('1');
    stock = nb % 10;
    if (nb > 10)
        my_put_nbr(nb / 10);
    my_putchar(stock + 48);
    return (0);
}
