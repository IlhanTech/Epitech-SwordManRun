/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** texture
*/

#include "../../include/graph.h"

void texture(initialisation *s)
{
    s->sprite = sfSprite_create();
    sfSprite_setTexture(s->sprite, s->texture, sfTrue);
}
