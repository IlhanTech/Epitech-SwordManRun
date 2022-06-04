/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** curseur
*/

#include "../include/graph.h"

personnage_t *objcursor(personnage_t *p, initialisation *s)
{
    sfVector2f scale = {0.8, 0.8};
    sfIntRect rect = {0, 0, 236, 236};
    sfVector2f vector;
    p->cursor = create_object("image/Menu/cursor.png", vector, rect);
    sfSprite_setTexture(p->cursor->sprite, p->cursor->texture, sfFalse);
    sfSprite_setScale(p->cursor->sprite, scale);
    return (p);
}

void pos_mouse(personnage_t *p, initialisation *s)
{
    p->cursor->vector.x = sfMouse_getPositionRenderWindow(s->window).x - 75;
    p->cursor->vector.y = sfMouse_getPositionRenderWindow(s->window).y - 75;

    if (p->mouse.x <= 1200 && p->mouse.y <= 600) {
        sfSprite_setPosition(p->cursor->sprite, p->cursor->vector);
        sfRenderWindow_setMouseCursorVisible(s->window, 0);
    }
}

void cursor(personnage_t *p, initialisation *s)
{
    sfRenderWindow_drawSprite(s->window, p->cursor->sprite, NULL);
    pos_mouse(p, s);
}
