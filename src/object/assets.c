/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** asset
*/

#include "../include/graph.h"

personnage_t *roche(personnage_t *p)
{
    sfVector2f scale = {0.6, 0.4};
    sfIntRect rect = {0, 0, 242, 237};
    sfVector2f vector = {545, 290};
    p->roche = create_object("image/Menu/socle.png", vector, rect);
    sfSprite_setScale(p->roche->sprite, scale);
    return (p);
}

personnage_t *feu(personnage_t *p)
{
    sfVector2f scale = {0.7, 0.7};
    sfIntRect rect = {0, 0, 150, 150};
    sfVector2f vector = {1000, 1000};
    p->feu = create_object("image/Personnages/feu.png", vector, rect);
    sfSprite_setScale(p->feu->sprite, scale);
    return (p);
}
