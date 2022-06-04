/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** wings_menu
*/

#include "../include/graph.h"

personnage_t *pancarte(personnage_t *p)
{
    sfVector2f scale = {0.8, 0.8};
    sfIntRect rect = {0, 0, 1200, 766};
    sfVector2f vector = {400, 35};
    p->pancarte = create_object("image/Menu/wings_select.png", vector, rect);
    sfSprite_setScale(p->pancarte->sprite, scale);
    return (p);
}

personnage_t *left(personnage_t *p)
{
    sfVector2f scale = {1.20, 1.20};
    sfIntRect rect = {0, 0, 66, 66};
    sfVector2f vector = {330, 195};
    p->left = create_object("image/Menu/left_button.png", vector, rect);
    sfSprite_setScale(p->left->sprite, scale);
}

personnage_t *right(personnage_t *p)
{
    sfVector2f scale = {1.19, 1.19};
    sfIntRect rect = {0, 0, 62, 63};
    sfVector2f vector = {820, 188};
    p->right = create_object("image/Menu/right_button.png", vector, rect);
    sfSprite_setScale(p->right->sprite, scale);
    return (p);
}

personnage_t *retour(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 175, 92};
    sfVector2f vector = {530, 500};
    p->retour = create_object("image/Menu/patern_button.png", vector, rect);
    sfSprite_setScale(p->retour->sprite, scale);
    return (p);
}

personnage_t *chev_repos(personnage_t *p)
{
    sfVector2f scale = {0.35, 0.35};
    sfIntRect rect = {0, 0, 328, 482};
    sfVector2f vector = {560, 175};
    p->repos = create_object("image/Personnages/wings_menu_chev.png", vector, rect);
    sfSprite_setScale(p->repos->sprite, scale);
    return (p);
}
