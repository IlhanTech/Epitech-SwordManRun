/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday07-ilhan.neuville
** File description:
** my_strncat
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int i = 0;
    int j = 0;

    for (; dest[i] != '\0'; i++);
    for (; src[j] != '\0' && j < n;) {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i + j] = '\0';
    return (dest);
}
