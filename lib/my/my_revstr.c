/*
** EPITECH PROJECT, 2021
** B-CPE-100-LYN-1-1-cpoolday06-ilhan.neuville
** File description:
** my_revstr
*/

#include "../../include/my.h"

int my_strlenchar(char *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

void my_swapchar(char *a, char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

char *my_revstr(char *str)
{
    int a = 0;
    char *stock = NULL;
    int temp = my_strlenchar(str);
    int b = temp - 1;

    while (a < b) {
        my_swapchar(&str[a], &str[b]);
        a++;
        b--;
    }
    return (str);
}
