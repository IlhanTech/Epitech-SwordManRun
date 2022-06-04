/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** draw
*/

#include "../../include/graph.h"

void draw_game(initialisation *s, personnage_t *p, parallax_t *par, coeur_t *c)
{
    sfVector2f posout = {1000, 1000};
    set_out(s, p);
    sfRenderWindow_drawSprite(s->window, s->sprite, NULL);
    draw_parallax(s, par);
    draw_sprite(s, p);
    sfRenderWindow_drawSprite(s->window, p->dragon->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->oscore->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, c->coeur1->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, c->coeur2->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, c->coeur3->sprite, NULL);
    s->score = my_itoa(s->numbers);
    sfText_setString(s->text_score, s->score);
    sfRenderWindow_drawText(s->window, s->text_score, NULL);
    sfSprite_setPosition(p->play->sprite, posout);
    sfSprite_setPosition(p->wings_button->sprite, posout);
    sfSprite_setPosition(p->setting->sprite, posout);
    sfSprite_setPosition(p->quit->sprite, posout);
}

void draw_spritewings(initialisation *s, personnage_t *p)
{
    sfRenderWindow_drawSprite(s->window, p->back->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->pancarte->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->repos->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->roche->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->play->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->left->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->right->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_play, NULL);
    sfRenderWindow_drawText(s->window, s->text_wingssel, NULL);
    sfRenderWindow_drawSprite(s->window, p->retour->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_retour, NULL);
}

void draw_wingsmenu(initialisation *s, personnage_t *p)
{
    sfVector2f pos = {530, 200};
    sfVector2f pos2 = {530, 405};
    sfVector2f pos3 = {575, 405};
    sfVector2f posout = {1000, 1000};
    sfVector2f vector = {560, 175};
    sfVector2f vector2 = {530, 500};
    sfVector2f vector3 = {570, 500};
    sfVector2f vector4 = {330, 195};
    sfVector2f vector5 = {820, 188};

    set_out(s, p);
    draw_spritewings(s, p);
    sfSprite_setPosition(p->ailes->sprite, pos);
    sfSprite_setPosition(p->ailes_blanches->sprite, pos);
    sfSprite_setPosition(p->ailes_bleus->sprite, pos);
    sfSprite_setPosition(p->ailes_green->sprite, pos);
    sfSprite_setPosition(p->ailes_noires->sprite, pos);
    sfSprite_setPosition(p->play->sprite, pos2);
    sfSprite_setPosition(p->quit->sprite, posout);
    sfSprite_setPosition(p->repos->sprite, vector);
    sfSprite_setPosition(p->retour->sprite, vector2);
    sfSprite_setPosition(p->left->sprite, vector4);
    sfSprite_setPosition(p->right->sprite, vector5);
    sfText_setPosition(s->text_play, pos3);
    sfText_setPosition(s->text_retour, vector3);
    selecteur(s, p);
}

void draw_pause(initialisation *s, personnage_t *p, parallax_t *par, coeur_t *c)
{
    sfVector2f pos = {515, 260};
    sfVector2f pos2 = {550, 260};
    sfVector2f pos3 = {515, 160};

    draw_game(s, p, par, c);
    sfRenderWindow_drawSprite(s->window, p->oppac->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->resume->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_resume, NULL);
    sfRenderWindow_drawSprite(s->window, p->pause->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->retour->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_retour, NULL);
    sfSprite_setPosition(p->retour->sprite, pos);
    sfSprite_setPosition(p->resume->sprite, pos3);
    sfText_setPosition(s->text_retour, pos2);
}

void game(initialisation *s, personnage_t *p, parallax_t *par, coeur_t *c)
{
    if (s->game == 0) {
        draw_menu(s, p, par);
    }
    if (s->game == 1) {
        draw_game(s, p, par, c);
    }
    if (s->game == 2) {
        draw_wingsmenu(s, p);
    }
    if (s->game == 3) {
        draw_pause(s, p, par, c);
    }
    if (s->game == 4) {
        draw_settings(s, p);
    }
    if (s->game == 5) {
        draw_gameover(s, p);
    }
}