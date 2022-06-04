/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myhunter-ilhan.neuville
** File description:
** perso
*/

#include "../include/graph.h"

personnage_t *chevalier(personnage_t *p)
{
    sfVector2f scale = {0.35, 0.35};
    sfIntRect rect = {0, 0, 402, 455};
    sfVector2f vector = {535, 420};
    p->chevalier = create_object("image/Personnages/chevalier.png", vector, rect);
    sfSprite_setScale(p->chevalier->sprite, scale);
    return (p);
}

personnage_t *chevalier_jump(personnage_t *p)
{
    sfVector2f scale = {0.35, 0.35};
    sfIntRect rect = {0, 0, 402, 455};
    sfVector2f vector = {1000, 1000};
    p->chevalier_jump = create_object("image/Personnages/chevalier_jump.png", vector, rect);
    sfSprite_setScale(p->chevalier_jump->sprite, scale);
    return (p);
}

personnage_t *ailes(personnage_t *p)
{
    sfVector2f scale = {1, 1};
    sfIntRect rect = {0, 0, 165, 92};
    sfVector2f vector = {480, 450};
    p->ailes = create_object("image/Personnages/Ailes/ailes_default.png", vector, rect);
    sfSprite_setScale(p->ailes->sprite, scale);
    return (p);
}

personnage_t *attack_light(personnage_t *p)
{
    sfVector2f scale = {0.35, 0.35};
    sfIntRect rect = {0, 0, 489, 494};
    sfVector2f vector = {1000, 1000};
    p->attack_light = create_object("image/Personnages/attaque_light.png", vector, rect);
    sfSprite_setScale(p->attack_light->sprite, scale);
    return (p);
}

personnage_t *dragon(personnage_t *p)
{
    sfVector2f scale = {1.9, 1.9};
    sfIntRect rect = {0, 0, 256, 256};
    sfVector2f vector = {980, 280};
    p->dragon = create_object("image/Personnages/dragon.png", vector, rect);
    sfSprite_setScale(p->dragon->sprite, scale);
    return (p);
}