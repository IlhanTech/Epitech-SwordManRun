/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** button3
*/

#include "../include/graph.h"

void bouton_sound0(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->sound0->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 66 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 65) {
            effect(s);
            s->isound += 25;
    }
}

void bouton_sound25(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->sound25->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 66 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 65) {
            effect(s);
            s->isound += 25;
    }
}

void bouton_sound50(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->sound50->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 66 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 65) {
            effect(s);
            s->isound += 50;
    }
}

void bouton_sound100(initialisation *s, personnage_t *p)
{
    s->mousepos = sfMouse_getPositionRenderWindow(s->window);
    s->position = sfSprite_getPosition(p->sound100->sprite);
    if (s->mousepos.x >= s->position.x &&
        s->mousepos.x <= s->position.x + 66 &&
        s->mousepos.y >= s->position.y &&
        s->mousepos.y <= s->position.y + 65) {
            effect(s);
            s->isound += 25;
    }
}
