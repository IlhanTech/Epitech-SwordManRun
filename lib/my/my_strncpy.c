/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday06-ilhan.neuville
** File description:
** my_strncpy
*/

#include "../../include/my.h"

char *my_strncpy (char *dest, char const *src, int n)
{
    int i = 0;

    for (; i != n; i++) {
        dest[i] = src[i];
    }
    if (n > src[i]) {
        dest[i] = '\0';
    }
    return (dest);
}
