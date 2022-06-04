/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** asset_menu
*/

#include "../include/graph.h"

personnage_t *background(personnage_t *p)
{
    sfVector2f scale = {1.05, 1.05};
    sfIntRect rect = {0, 0, 1200, 766};
    sfVector2f vector = {-2, -100};
    p->back = create_object("image/Menu/back.png", vector, rect);
    sfSprite_setScale(p->back->sprite, scale);
    return (p);
}

personnage_t *play(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {515, 160};
    p->play = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->play->sprite, scale);
    return (p);
}

personnage_t *settings(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {515, 255};
    p->setting = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->setting->sprite, scale);
    return (p);
}

personnage_t *wings_button(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {515, 350};
    p->wings_button = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->wings_button->sprite, scale);
    return (p);
}

personnage_t *quit(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {515, 445};
    p->quit = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->quit->sprite, scale);
    return (p);
}
