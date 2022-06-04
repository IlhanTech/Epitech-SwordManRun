/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday04-ilhan.neuville
** File description:
** my_strlen
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
