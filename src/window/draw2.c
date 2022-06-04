/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** draw2
*/

#include "../../include/graph.h"

void draw_parallax(initialisation *s, parallax_t *par)
{
    sfRenderWindow_drawSprite(s->window, par->plan1->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, par->plan2->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, par->plan3->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, par->plan4->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, par->plan5->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, par->plan6->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, par->plan7->sprite, NULL);
}

void draw_sprite(initialisation *s, personnage_t *p)
{
    selecteur(s, p);
    sfRenderWindow_drawSprite(s->window, p->chevalier->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->pause->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->chevalier_jump->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->attack_light->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->feu->sprite, NULL);
}

void draw_menu(initialisation *s, personnage_t *p, parallax_t *par)
{
    sfVector2f posout = {1000, 1000};
    sfVector2f pos1 = {515, 255};
    sfVector2f pos2 = {515, 350};
    sfSprite_setPosition(p->retour->sprite, posout);
    sfSprite_setPosition(p->setting->sprite, pos1);
    sfSprite_setPosition(p->wings_button->sprite, pos2);
    sfText_setPosition(s->text_retour, posout);
    sfRenderWindow_drawSprite(s->window, p->back->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->play->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->setting->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->wings_button->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->quit->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_play, NULL);
    sfRenderWindow_drawText(s->window, s->text_settings, NULL);
    sfRenderWindow_drawText(s->window, s->text_wings, NULL);
    sfRenderWindow_drawText(s->window, s->text_quit, NULL);
}

void draw_settingsth(initialisation *s, personnage_t *p)
{
    sfRenderWindow_drawSprite(s->window, p->back->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->retour->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_retour, NULL);
    sfRenderWindow_drawSprite(s->window, p->play->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_play, NULL);
    sfRenderWindow_drawSprite(s->window, p->pancarte->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_menusettings, NULL);
    sfRenderWindow_drawText(s->window, s->text_fps, NULL);
    sfRenderWindow_drawText(s->window, s->text_sound, NULL);
    sfRenderWindow_drawSprite(s->window, p->fps90->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->fps130->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_fps90, NULL);
    sfRenderWindow_drawText(s->window, s->text_fps130, NULL);
}

void draw_settings(initialisation *s, personnage_t *p)
{
    sfVector2f pos2 = {530, 405};
    sfVector2f pos3 = {575, 405};
    sfVector2f pos4 = {530, 500};
    sfVector2f pos5 = {570, 500};

    set_out(s, p);
    draw_settingsth(s, p);
    sfSprite_setPosition(p->play->sprite, pos2);
    sfSprite_setPosition(p->retour->sprite, pos4);
    sfText_setPosition(s->text_play, pos3);
    sfText_setPosition(s->text_retour, pos5);
    sfRenderWindow_drawText(s->window, s->text_byme, NULL);
    draw_sound(s, p);
}