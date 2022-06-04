/*
** EPITECH PROJECT, 2021
** myhunter
** File description:
** create
*/

#include "../include/graph.h"

void create_parallax(parallax_t *par)
{
    create_slide1(par);
    create_slide2(par);
    create_slide3(par);
    create_slide4(par);
    create_slide5(par);
    create_slide6(par);
    create_slide7(par);
    repeated(par);
}

void create_text(initialisation *s)
{
    text_play(s);
    text_settings(s);
    text_wings(s);
    text_quit(s);
    text_wingsselect(s);
    text_retour(s);
    text_menusettings(s);
    text_fps(s);
    text_sound(s);
    text_fps90(s);
    text_fps130(s);
    text_resume(s);
    text_score(s);
    text_byme(s);
    text_youloose(s);
    text_highscore(s);
    text_highscorebis(s);
    text_scorebis(s);
}

void assets_create(personnage_t *p)
{
    settings(p);
    background(p);
    play(p);
    wings_button(p);
    quit(p);
    pancarte(p);
    roche(p);
    left(p);
    right(p);
    retour(p);
    pause_but(p);
    resume(p);
    sound0(p);
    sound25(p);
    sound50(p);
    sound100(p);
    fps_90(p);
    fps_130(p);
    oppac(p);
    oscore(p);
}

void create_life(coeur_t *c)
{
    coeur1(c);
    coeur2(c);
    coeur3(c);
}

void create(initialisation *s, personnage_t *p, parallax_t *par, coeur_t *c)
{
    create_life(c);
    attack_light(p);
    window(s);
    clockcreate(s);
    texture(s);
    chevalier(p);
    chev_repos(p);
    ailes(p);
    ailes_noire(p);
    ailes_green(p);
    ailes_blanches(p);
    ailes_bleus(p);
    chevalier_jump(p);
    create_parallax(par);
    create_text(s);
    assets_create(p);
    dragon(p);
    feu(p);
    sound(s);
    objcursor(p, s);
}
