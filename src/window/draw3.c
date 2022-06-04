/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** draw3
*/

#include "../../include/graph.h"

void select_funcsound(initialisation *s)
{
    if (s->isound > 100)
        s->isound = 0;
}

void draw_sound2(initialisation *s, personnage_t *p)
{
    sfVector2f posout = {1000, 1000};
    sfVector2f posin = {600, 140};

    if (s->isound == 50) {
        sfSprite_setPosition(p->sound25->sprite, posout);
        sfSprite_setPosition(p->sound50->sprite, posin);
        sfRenderWindow_drawSprite(s->window, p->sound50->sprite, NULL);
        sfMusic_setVolume(s->music, s->isound);
        sfMusic_setVolume(s->sound_feu, s->isound);
        sfMusic_setVolume(s->dragon_sound, s->isound);
    }
    if (s->isound == 100) {
        sfSprite_setPosition(p->sound50->sprite, posout);
        sfSprite_setPosition(p->sound100->sprite, posin);
        sfRenderWindow_drawSprite(s->window, p->sound100->sprite, NULL);
        sfMusic_setVolume(s->dragon_sound, s->isound);
        sfMusic_setVolume(s->music, s->isound);
        sfMusic_setVolume(s->sound_feu, s->isound);
    }

}

void rac(initialisation *s, personnage_t *p)
{
    draw_sound2(s, p);
    select_funcsound(s);
}

void draw_sound(initialisation *s, personnage_t *p)
{
    sfVector2f posout = {1000, 1000};
    sfVector2f posin = {600, 140};
    sfVector2f posin2 = {600, 143};

    if (s->isound == 0) {
        sfSprite_setPosition(p->sound100->sprite, posout);
        sfSprite_setPosition(p->sound0->sprite, posin2);
        sfRenderWindow_drawSprite(s->window, p->sound0->sprite, NULL);
        sfMusic_setVolume(s->music, s->isound);
        sfMusic_setVolume(s->dragon_sound, s->isound);
        sfMusic_setVolume(s->sound_feu, s->isound);
    }
    if (s->isound == 25) {
        sfSprite_setPosition(p->sound0->sprite, posout);
        sfSprite_setPosition(p->sound25->sprite, posin);
        sfRenderWindow_drawSprite(s->window, p->sound25->sprite, NULL);
        sfMusic_setVolume(s->music, s->isound);
        sfMusic_setVolume(s->dragon_sound, s->isound);
        sfMusic_setVolume(s->sound_feu, s->isound);
    }
    rac(s, p);
}

void draw_gameover(initialisation *s, personnage_t *p)
{
    sfVector2f pos = {600, 140};
    sfVector2f pos2 = {515, 445};
    sfVector2f posout = {1000, 1000};
    sfRenderWindow_drawSprite(s->window, p->back->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->quit->sprite, NULL);
    sfRenderWindow_drawSprite(s->window, p->pancarte->sprite, NULL);
    sfRenderWindow_drawText(s->window, s->text_quit, NULL);
    //sfRenderWindow_drawText(s->window, s->text_score, NULL);
    sfRenderWindow_drawText(s->window, s->text_youloose, NULL);
    sfRenderWindow_drawText(s->window, s->text_highscore, NULL);
    sfRenderWindow_drawText(s->window, s->text_highscorebis, NULL);
    sfRenderWindow_drawText(s->window, s->text_scorebis, NULL);
    sfText_setPosition(s->text_score, pos);
    set_out(s, p);
    sfSprite_setPosition(p->quit->sprite, pos2);
    sfMusic_setVolume(s->music, 0);
    sfMusic_setVolume(s->dragon_sound, 0);
    sfMusic_setVolume(s->sound_feu, 0);
}