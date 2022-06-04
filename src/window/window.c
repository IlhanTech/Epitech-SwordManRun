/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** window
*/

#include "../../include/graph.h"

void window(initialisation *s)
{
    s->video_mode = (sfVideoMode){1200, 600, 32};
    s->window = sfRenderWindow_create(s->video_mode,
                                    "SwordManRun",
                                    sfDefaultStyle,
                                    NULL);
    sfRenderWindow_setFramerateLimit(s->window, s->fps);
}

void display(initialisation *s)
{
    sfRenderWindow_display(s->window);
}
