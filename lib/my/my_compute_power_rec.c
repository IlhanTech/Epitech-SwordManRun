/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday05-ilhan.neuville
** File description:
** my_compute_power_rec
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb , int p)
{
    if (p < 0 || nb > 2147483647) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
