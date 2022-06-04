/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** assets_game
*/

#include "../include/graph.h"

personnage_t *pause_but(personnage_t *p)
{
    sfVector2f scale = {1.25, 1.25};
    sfIntRect rect = {0, 0, 62, 63};
    sfVector2f vector = {1120, 5};
    p->pause = create_object("image/Menu/pause.png", vector, rect);
    sfSprite_setScale(p->pause->sprite, scale);
    return (p);
}

personnage_t *resume(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {515, 160};
    p->resume = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->resume->sprite, scale);
    return (p);
}

personnage_t *oscore(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {515, 10};
    p->oscore = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->oscore->sprite, scale);
    return (p);
}