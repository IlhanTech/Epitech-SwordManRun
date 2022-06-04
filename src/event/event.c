/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** event
*/

#include "../../include/graph.h"

void event_div(initialisation *s, personnage_t *p)
{
    if (s->event.type == sfEvtKeyPressed &&
    s->event.key.code == sfKeyUp) {
        jump(s, p);
        switch_attack(p, s);
        p->var = 0;
        clock_flywalk(s, p);
    }
    if (s->event.type == sfEvtKeyPressed &&
    s->event.key.code == sfKeyDown) {
        force_down(s, p);
    }
    if (s->event.type == sfEvtKeyPressed &&
    s->event.key.code == sfKeyRight && s->gravity.y >= 420) {
        attack(p, s);
    }
    sound_demobool(s);
}

void button_sound(initialisation *s, personnage_t *p)
{
    bouton_sound0(s, p);
    bouton_sound25(s, p);
    bouton_sound50(s, p);
    bouton_sound100(s, p);
}

void handle_event(initialisation *s, personnage_t *p)
{
    int i = 0;

    while (sfRenderWindow_pollEvent(s->window, &s->event)) {
        if (s->event.type == sfEvtClosed)
            sfRenderWindow_close(s->window);
        event_div(s, p);
        if (s->event.type == sfEvtMouseButtonPressed) {
            bouton_play(s, p);
            bouton_settings(s, p);
            bouton_wings(s, p);
            bouton_quit(s, p);
            sub_play(s, p);
            bouton_retour(s, p);
            bouton_left(s, p);
            bouton_right(s, p);
            bouton_pause(s, p);
            button_sound(s, p);
            bouton_fps90(s, p);
            bouton_fps130(s, p);
            bouton_resume(s, p);
        }
    }
}
