/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** destroy
*/

#include "../../include/graph.h"

void destroy(initialisation *s)
{
    sfRenderWindow_destroy(s->window);
    sfTexture_destroy(s->texture);
    sfSprite_destroy(s->sprite);
    sfMusic_destroy(s->music);
    sfMusic_destroy(s->sound_menu);
    sfMusic_destroy(s->dragon_sound);
    sfMusic_destroy(s->sound_feu);
}
