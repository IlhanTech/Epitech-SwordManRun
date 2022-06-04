/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday07-ilhan.neuville
** File description:
** my_putchar
*/

#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
