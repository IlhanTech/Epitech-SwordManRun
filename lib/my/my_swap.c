/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday04-ilhan.neuville
** File description:
** my_swap
*/

#include "../../include/my.h"

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
