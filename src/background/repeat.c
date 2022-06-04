/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** repeate
*/

#include "../include/graph.h"

void repeated(parallax_t *par)
{
    sfTexture_setRepeated(par->plan1->texture, sfTrue);
    sfTexture_setRepeated(par->plan2->texture, sfTrue);
    sfTexture_setRepeated(par->plan3->texture, sfTrue);
    sfTexture_setRepeated(par->plan4->texture, sfTrue);
    sfTexture_setRepeated(par->plan5->texture, sfTrue);
    sfTexture_setRepeated(par->plan6->texture, sfTrue);
    sfTexture_setRepeated(par->plan7->texture, sfTrue);
}
