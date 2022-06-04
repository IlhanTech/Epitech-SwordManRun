/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-ilhan.neuville
** File description:
** graph
*/

#ifndef GRAPH_H
    #define GRAPH_H

    #include "struct.h"
    #include "my.h"

int description(int ac, char **av);
void texture(initialisation *s);
void closewindow(initialisation *s);
void window(initialisation *s);
void display(initialisation *s);
void destroy(initialisation *s);
void game(initialisation *s, personnage_t *p, parallax_t *par, coeur_t *c);
void draw_game(initialisation *s, personnage_t *p, parallax_t *par, coeur_t *c);
void draw_parallax(initialisation *s, parallax_t *par);
void draw_menu(initialisation *s, personnage_t *p, parallax_t *par);
void draw_sprite(initialisation *s, personnage_t *p);
void loopmusic(initialisation *s);
void sound(initialisation *s);
void handle_event(initialisation *s, personnage_t *p);
void create(initialisation *s, personnage_t *p, parallax_t *par,    coeur_t *c);
void clocktime(initialisation *s, personnage_t *p, parallax_t *par);
void clockcreate(initialisation *s);

void animation1(personnage_t *p);
void animation2(personnage_t *p);
void animation3(personnage_t *p);
void animation4(personnage_t *p);
void animation5(personnage_t *p);
void animation6(personnage_t *p);
void animation7(personnage_t *p);
void animation8(personnage_t *p);
void animation9(personnage_t *p);
void animation10(personnage_t *p);
void animation11(personnage_t *p);
void animation12(personnage_t *p);

object_t *create_object(const char *filepath, sfVector2f pos, sfIntRect rect);
object_t *create_object2(const char *filepath);

personnage_t *chevalier(personnage_t *p);
personnage_t *chevalier_jump(personnage_t *p);
personnage_t *ailes(personnage_t *p);
personnage_t *attack_light(personnage_t *p);
personnage_t *chev_repos(personnage_t *p);
personnage_t *ailes_blanches(personnage_t *p);
personnage_t *ailes_noire(personnage_t *p);
personnage_t *ailes_green(personnage_t *p);
personnage_t *ailes_bleus(personnage_t *p);

personnage_t *sound0(personnage_t *p);
personnage_t *sound25(personnage_t *p);
personnage_t *sound50(personnage_t *p);
personnage_t *sound100(personnage_t *p);

void avancer(personnage_t *p, initialisation *s);

void parallax_moove1(parallax_t *par);
void parallax_moove2(parallax_t *par);
void parallax_moove3(parallax_t *par);
void parallax_moove4(parallax_t *par);

void create_parallax(parallax_t *par);

parallax_t *create_slide1(parallax_t *par);
parallax_t *create_slide2(parallax_t *par);
parallax_t *create_slide3(parallax_t *par);
parallax_t *create_slide4(parallax_t *par);
parallax_t *create_slide5(parallax_t *par);
parallax_t *create_slide6(parallax_t *par);
parallax_t *create_slide7(parallax_t *par);

personnage_t *background(personnage_t *p);
personnage_t *play(personnage_t *p);
personnage_t *settings(personnage_t *p);
personnage_t *wings_button(personnage_t *p);
personnage_t *quit(personnage_t *p);
personnage_t *pancarte(personnage_t *p);
personnage_t *roche(personnage_t *p);
personnage_t *left(personnage_t *p);
personnage_t *right(personnage_t *p);
personnage_t *retour(personnage_t *p);
personnage_t *pause_but(personnage_t *p);
personnage_t *resume(personnage_t *p);
personnage_t *dragon(personnage_t *p);
personnage_t *feu(personnage_t *p);
personnage_t *fps_90(personnage_t *p);
personnage_t *fps_130(personnage_t *p);
personnage_t *oppac(personnage_t *p);
personnage_t *oscore(personnage_t *p);
personnage_t *objcursor(personnage_t *p, initialisation *s);

coeur_t *coeur1(coeur_t *c);
coeur_t *coeur2(coeur_t *c);
coeur_t *coeur3(coeur_t *c);

void repeated(parallax_t *par);
void jump(initialisation *s, personnage_t *p);
void down(personnage_t *p, initialisation *s);
void clockjump(personnage_t *p, initialisation *s);
void clock_parallax(initialisation *s, parallax_t *par);
void gravity_jump(personnage_t *p, initialisation *s);
void clock_ailes(initialisation *s, personnage_t *p);
void clock_dragon(initialisation *s, personnage_t *p);
void force_down(initialisation *s, personnage_t *p);
void clock_flywalk(initialisation *s, personnage_t *p);
void attack(personnage_t *p, initialisation *s);
void switch_attack(personnage_t *p, initialisation *s);
void clock_background(initialisation *s, personnage_t *p);
void text_play(initialisation *s);
void text_settings(initialisation *s);
void text_wings(initialisation *s);
void text_quit(initialisation *s);
void bouton_play(initialisation *s, personnage_t *p);
void bouton_settings(initialisation *s, personnage_t *p);
void bouton_wings(initialisation *s, personnage_t *p);
void bouton_quit(initialisation *s, personnage_t *p);
void sub_play(initialisation *s, personnage_t *p);
void text_wingsselect(initialisation *s);
void bouton_retour(initialisation *s, personnage_t *p);
void text_retour(initialisation *s);
void bouton_right(initialisation *s, personnage_t *p);
void bouton_left(initialisation *s, personnage_t *p);
object_t *create_object3(sfVector2f pos, sfIntRect rect);
void selecteur(initialisation *s, personnage_t *p);
void bouton_pause(initialisation *s, personnage_t *p);
void clock_feu(initialisation *s, personnage_t *p);
void moove(initialisation *s, personnage_t *p);
void draw_settings(initialisation *s, personnage_t *p);
void text_menusettings(initialisation *s);
void text_sound(initialisation *s);
void text_fps(initialisation *s);
void draw_sound(initialisation *s, personnage_t *p);
void bouton_sound0(initialisation *s, personnage_t *p);
void bouton_sound25(initialisation *s, personnage_t *p);
void bouton_sound50(initialisation *s, personnage_t *p);
void bouton_sound100(initialisation *s, personnage_t *p);
void bouton_fps90(initialisation *s, personnage_t *p);
void bouton_fps130(initialisation *s, personnage_t *p);
void text_fps90(initialisation *s);
void text_fps130(initialisation *s);
void effect(initialisation *s);
void effect_feu(initialisation *s);
void clock_repos(initialisation *s, personnage_t *p);
void set_position(initialisation *s, personnage_t *p);
void text_resume(initialisation *s);
void clock_score(initialisation *s);
void text_score(initialisation *s);
void cursor(personnage_t *p, initialisation *s);
void colision(initialisation *s, personnage_t *p, coeur_t *c);
void clock_info(initialisation *s, personnage_t *p);
void text_byme(initialisation *s);
void sound_demo(initialisation *s);
void sound_off(initialisation *s);
void sound_demobool(initialisation *s);
void life_counter(initialisation *s, personnage_t *p, coeur_t *c);
void draw_gameover(initialisation *s, personnage_t *p);
void bouton_resume(initialisation *s, personnage_t *p);
void set_out(initialisation *s, personnage_t *p);
void highscore(initialisation *s);
void text_youloose(initialisation *s);
void text_highscore(initialisation *s);
void text_highscorebis(initialisation *s);
void text_scorebis(initialisation *s);

#endif //GRAPH_H
