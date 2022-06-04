/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** assets_settings
*/

#include "../include/graph.h"

personnage_t *sound0(personnage_t *p)
{
    sfVector2f scale = {1.35, 1.35};
    sfIntRect rect = {0, 0, 66, 65};
    sfVector2f vector = {1000, 1000};
    p->sound0 = create_object("image/Menu/sound0.png", vector, rect);
    sfSprite_setScale(p->sound0->sprite, scale);
    return (p);
}

personnage_t *sound25(personnage_t *p)
{
    sfVector2f scale = {1.35, 1.35};
    sfIntRect rect = {0, 0, 66, 65};
    sfVector2f vector = {1000, 1000};
    p->sound25 = create_object("image/Menu/sound25.png", vector, rect);
    sfSprite_setScale(p->sound25->sprite, scale);
    return (p);
}

personnage_t *sound50(personnage_t *p)
{
    sfVector2f scale = {1.35, 1.35};
    sfIntRect rect = {0, 0, 66, 65};
    sfVector2f vector = {600, 140};
    p->sound50 = create_object("image/Menu/sound50.png", vector, rect);
    sfSprite_setScale(p->sound50->sprite, scale);
    return (p);
}

personnage_t *sound100(personnage_t *p)
{
    sfVector2f scale = {1.35, 1.35};
    sfIntRect rect = {0, 0, 66, 65};
    sfVector2f vector = {1000, 1000};
    p->sound100 = create_object("image/Menu/sound100.png", vector, rect);
    sfSprite_setScale(p->sound100->sprite, scale);
    return (p);
}