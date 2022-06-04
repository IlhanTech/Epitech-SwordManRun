/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday04-ilhan.neuville
** File description:
** my_putstr
*/

#include "../../include/my.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
