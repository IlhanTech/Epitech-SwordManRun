/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** jump
*/

#include "../include/graph.h"

void ailes_fly(personnage_t *p, initialisation *s)
{
    sfSprite_setPosition(p->ailes->sprite, s->gravity_ailes);
    sfSprite_setPosition(p->ailes_noires->sprite, s->gravity_ailes);
    sfSprite_setPosition(p->ailes_blanches->sprite, s->gravity_ailes);
    sfSprite_setPosition(p->ailes_green->sprite, s->gravity_ailes);
    sfSprite_setPosition(p->ailes_bleus->sprite, s->gravity_ailes);
}

void hauteur(personnage_t *p, initialisation *s)
{
    sfVector2f posout = {1000, 1000};
    sfVector2f posin = {535, 420};
    sfVector2f moove = sfSprite_getPosition(p->chevalier->sprite);
    s->seconds4 = s->times4.microseconds / 10000.0;
    s->times4 = sfClock_getElapsedTime(s->clock4);

    if (s->seconds4 > 0.05) {
        if (s->gravity.y >= 50) {
            s->gravity.y -= 4;
            s->gravity_ailes.y -= 4;
            sfSprite_setPosition(p->chevalier->sprite, s->gravity);
            ailes_fly(p, s);
            clock_ailes(s, p);
        }
        sfClock_restart(s->clock4);
    }
}

void gravity_jump(personnage_t *p, initialisation *s)
{
    sfVector2f posout = {1000, 1000};
    sfVector2f posin = {535, 420};
    s->seconds3 = s->times3.microseconds / 10000.0;
    s->times3 = sfClock_getElapsedTime(s->clock3);

    //sfSprite_setPosition(p->chevalier->sprite, posout);
    if (s->seconds3 > 0.05) {
        if (s->gravity.y < 420  && s->gravity_ailes.y < 450) {
            s->gravity.y += 0.1;
            s->gravity_ailes.y += 0.1;
            sfSprite_setPosition(p->chevalier->sprite, s->gravity);
            ailes_fly(p, s);
        }
        if (s->gravity.y >= 420) {
            p->var = 1;
        }
        sfClock_restart(s->clock3);
    }
}

void jump(initialisation *s, personnage_t *p)
{
    hauteur(p, s);
}

void force_down(initialisation *s, personnage_t *p)
{
    if (s->gravity.y < 420) {
        s->gravity.y += 6;
        s->gravity_ailes.y += 6;
        sfSprite_setPosition(p->chevalier->sprite, s->gravity);
        sfSprite_setPosition(p->ailes->sprite, s->gravity_ailes);
    }
}
