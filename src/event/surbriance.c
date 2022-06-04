/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** surbriance
*/

#include "../include/graph.h"

void sub_play(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->play->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 175 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 92) {
            sfText_setColor(s->text_wings, sfRed);
    } else {
        sfText_setColor(s->text_wings, sfBlack);
    }
}
