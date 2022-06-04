##
## EPITECH PROJECT, 2021
## myhunter
## File description:
## Makefile
##

CFLAGS = -g3

SRC		= 	src/main.c	\
			src/window/description.c	\
			src/create/create.c	\
			src/window/window.c	\
			src/event/music.c	\
			src/window/draw.c	\
			src/window/texture.c	\
			src/event/event.c	\
			src/destroy/destroy.c	\
			src/create/create_object.c	\
			src/clock/clock.c	\
			src/clock/clock2.c	\
			src/movement/moove.c	\
			src/animation/animation.c	\
			src/animation/jump.c	\
			src/object/perso.c	\
			src/background/parallax.c	\
			src/background/create_parallax.c	\
			src/background/create_parallax2.c	\
			src/background/repeat.c	\
			src/event/attack.c	\
			src/object/assets_menu.c	\
			src/window/text.c	\
			src/window/text3.c	\
			src/event/buttons.c	\
			src/event/surbriance.c	\
			src/window/draw2.c	\
			src/object/wings_menu.c	\
			src/animation/animation2.c	\
			src/object/assets.c	\
			src/window/text2.c	\
			src/object/ailes_selecteur.c	\
			src/event/buttons2.c	\
			src/event/buttons3.c	\
			src/event/buttons4.c	\
			src/object/ailes_setup.c	\
			src/animation/ailes_animation.c	\
			src/object/assets_game.c	\
			src/object/assets_settings.c	\
			src/window/draw3.c	\
			src/object/assets_settings2.c	\
			src/event/sound.c	\
			src/event/position_set.c	\
			src/window/cursor.c	\
			src/event/colision.c	\
			src/maps/map.c	\
			src/object/coeur.c	\
			src/event/sound_demo.c	\
			src/window/life.c	\
			src/highscore/high_score.c	\
			src/window/text4.c

OBJ = $(SRC:.c=.o)

MYLIB = -Iinclude -Llib/my -lmy
NAME = swordmanrun
CFLAGS += -Wextra -Iinclude

$(NAME): $(OBJ)
	cd lib/my && make
	gcc $(OBJ) -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio -Llib/my -lmy -o./$(NAME)

all: $(NAME)

fclean:
	make clean
	rm -f $(NAME)
	rm -f $(NAME)_tests

clean:
	find . -type f -name '*.o' -delete
	find . -type f -name '*.gcda' -delete
	find . -type f -name '*.gcno' -delete
	find . -type f -name '*.gcov' -delete
	find . -type f -name '*.a' -delete

re:
	make fclean
	make