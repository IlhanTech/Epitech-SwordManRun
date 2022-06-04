/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday07-ilhan.neuville
** File description:
** my_strcat
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    for (; dest[i] != '\0'; i++);
    for (; src[j] != '\0';) {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
