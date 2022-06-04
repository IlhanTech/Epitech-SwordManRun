/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** life
*/

#include "../../include/graph.h"

void life_counter(initialisation *s, personnage_t *p, coeur_t *c)
{
    sfVector2f posnull = {2000, 2000};

    if (c->nblife == 2) {
        sfSprite_setPosition(c->coeur3->sprite, posnull);
    }
    if (c->nblife == 1) {
        sfSprite_setPosition(c->coeur2->sprite, posnull);
    }
    if (c->nblife == 0) {
        sfSprite_setPosition(c->coeur1->sprite, posnull);
    }
     if (c->nblife == -1) {
        sfSprite_setPosition(c->coeur1->sprite, posnull);
        s->game = 5;
    }
}