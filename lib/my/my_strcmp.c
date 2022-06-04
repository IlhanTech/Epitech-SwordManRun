/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday07-ilhan.neuville
** File description:
** my_strcmp
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}
