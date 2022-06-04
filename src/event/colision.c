/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** colision
*/

#include "../include/graph.h"

void clock_info(initialisation *s, personnage_t *p)
{
    s->seconds12 = s->times12.microseconds / 1000000.0;
    s->times12 = sfClock_getElapsedTime(s->clock12);

    if (s->seconds12 > 0.05) {
        p->pos_chev = sfSprite_getPosition(p->chevalier->sprite);
        p->pos_feu = sfSprite_getPosition(p->feu->sprite);
        sfClock_restart(s->clock12);
    }
}

void colision(initialisation *s, personnage_t *p, coeur_t *c)
{
    sfVector2f posrestore = sfSprite_getPosition(p->feu->sprite);
    sfVector2f tmp = sfSprite_getPosition(p->dragon->sprite);
    posrestore.x = 980;
    posrestore.y = tmp.y + 130;

    if (p->pos_feu.x >= p->pos_chev.x &&
    p->pos_feu.x <= p->pos_chev.x + 100 &&
    p->pos_feu.y >= p->pos_chev.y &&
    p->pos_feu.y <= p->pos_chev.y + 100) {
        effect_feu(s);
        sfSprite_setPosition(p->feu->sprite, posrestore);
        c->nblife = c->nblife - 1;
        s->numbers -= 100;
    }
}
