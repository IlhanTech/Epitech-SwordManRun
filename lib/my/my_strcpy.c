/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday06-ilhan.neuville
** File description:
** my_strcpy
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        dest[i] = str[i];
    }
    dest[i] = '\0';
    return (dest);
}
