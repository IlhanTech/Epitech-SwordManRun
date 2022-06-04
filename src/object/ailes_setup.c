/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** ailes_setup
*/

#include "../include/graph.h"

personnage_t *ailes_blanches(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 165, 92};
    sfVector2f vector = {480, 450};
    p->ailes_blanches = create_object("image/Personnages/Ailes/ailes_blanches.png", vector, rect);
    sfSprite_setScale(p->ailes_blanches->sprite, scale);
    return (p);
}

personnage_t *ailes_noire(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 165, 92};
    sfVector2f vector = {480, 450};
    p->ailes_noires = create_object("image/Personnages/Ailes/ailes_noire.png", vector, rect);
    sfSprite_setScale(p->ailes_noires->sprite, scale);
    return (p);
}

personnage_t *ailes_green(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 165, 92};
    sfVector2f vector = {480, 450};
    p->ailes_green = create_object("image/Personnages/Ailes/ailes_green.png", vector, rect);
    sfSprite_setScale(p->ailes_green->sprite, scale);
    return (p);
}

personnage_t *ailes_bleus(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 165, 92};
    sfVector2f vector = {480, 450};
    p->ailes_bleus = create_object("image/Personnages/Ailes/ailes_bleu.png", vector, rect);
    sfSprite_setScale(p->ailes_bleus->sprite, scale);
    return (p);
}