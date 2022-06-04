/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** description
*/

#include "../../include/graph.h"

int description(int ac, char **av)
{
    if (ac == 2 && av[1][1] == 'h') {
        my_putstr("My_Runner Graphic Project\n");
        my_putstr("Thème Chevalier : \n");
        my_putstr("The My_runner is a racing game\n");
        my_putstr("with several animations and levels.\n");
        my_putstr("You can find a score\n");
        my_putstr("which will tell you the number of meters covered.\n");
        my_putstr("Good luck and good race! ;)\n");
        return (1);
    }
    return (0);
}
