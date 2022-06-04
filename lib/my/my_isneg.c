/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday03-ilhan.neuville
** File description:
** my_isneg
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n > 0 || n == 0) {
        my_putchar('P');
        my_putchar('\n');
    } else if (n < 0) {
        my_putchar('N');
        my_putchar('\n');
    }
}
