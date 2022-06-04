/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** assets_settings2
*/

#include "../include/graph.h"

personnage_t *fps_90(personnage_t *p)
{
    sfVector2f scale = {0.6, 0.6};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {550, 250};
    p->fps90 = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->fps90->sprite, scale);
    return (p);
}

personnage_t *fps_130(personnage_t *p)
{
    sfVector2f scale = {0.6, 0.6};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {665, 250};
    p->fps130 = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->fps130->sprite, scale);
    return (p);
}

personnage_t *oppac(personnage_t *p)
{
    sfVector2f scale = {2, 2};
    sfIntRect rect = {0, 0, 881, 513};
    sfVector2f vector = {0, 0};
    p->oppac = create_object("image/Menu/oppac.png", vector, rect);
    sfSprite_setScale(p->oppac->sprite, scale);
    return (p);
}