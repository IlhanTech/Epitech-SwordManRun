/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** create_parallax2
*/

#include "../include/graph.h"

parallax_t *create_slide6(parallax_t *par)
{
    sfIntRect rect = {0, 0, 1200, 600};
    par->plan6 = create_object2("image/Parallax/p6.png");
    return (par);
}

parallax_t *create_slide7(parallax_t *par)
{
    sfIntRect rect = {0, 0, 1200, 600};
    par->plan7 = create_object2("image/Parallax/p7.png");
    return (par);
}
