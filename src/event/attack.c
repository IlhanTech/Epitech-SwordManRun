/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** attack
*/

#include "../include/graph.h"

void attack(personnage_t *p, initialisation *s)
{
    sfVector2f posout = {1000, 1000};
    sfVector2f posin = sfSprite_getPosition(p->chevalier->sprite);

    sfSprite_setPosition(p->chevalier->sprite, posout);
    sfSprite_setPosition(p->attack_light->sprite, posin);
    s->seconds7 = s->times7.microseconds / 10000.0;
    s->times7 = sfClock_getElapsedTime(s->clock7);
}

void switch_attack(personnage_t *p, initialisation *s)
{
    sfVector2f posout = {1000, 1000};
    sfVector2f posin = sfSprite_getPosition(p->chevalier->sprite);

    sfSprite_setPosition(p->chevalier->sprite, posin);
    sfSprite_setPosition(p->attack_light->sprite, posout);
}
