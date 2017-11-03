SYS := $(shell clang -dumpmachine)

CC			=	clang

NAME		=	wolf3d

LNAME		=	ft

DIR			=	lib$(LNAME)

HDR			=	$(DIR)/$(DIR).a

SRC			=	main.c						\
				parser.c					\
				init_struct.c				\
				init_struct_bis.c			\
				print.c						\
				check_for_parser.c			\
				exit_prog.c					\
				start_wolf.c				\
				launch_raycasting.c			\
				init_step_and_side.c		\
				move_and_check_hit_wall.c	\
				correct_fisheye.c			\
				search_where_draw.c			\
				key_fonction.c				\
				event_fonc.c				\
				mlx_image.c					\
				put_pix_image.c				\
				print_usage_event.c			\

OBJ			=	$(patsubst %.c,srcs/%.o,$(SRC))

LFLAGS		=	-L$(DIR) -l$(LNAME)

WFLAGS 		=	-g3 -fsanitize=address -Wall -Wextra -Werror

CFLAGS1		=	$(WFLAGS) -I./includes/ -I./$(DIR)/includes
# -I./$(DIRMLX)

OFLAGS		=	 #-Ofast -O3
ifneq (, $(findstring linux, $(SYS)))
	DIRMLX	=	minilibx
	MLXFLAG =	-L ./$(DIRMLX) -I./$(DIRMLX) -lmlx -lXext -lX11 -lm
else
  	DIRMLX	=	minilibx_macos
	MLXFLAG =	-L ./$(DIRMLX) -I./$(DIRMLX) -lmlx -framework OpenGL -framework AppKit -lm
endif

HDR			=	$(DIR)/$(DIR).a

CFLAGS		=	$(CFLAGS1) $(OFLAGS)

all:		$(NAME) $(HDR)

$(NAME):	$(OBJ) $(HDR)
			make -C $(DIRMLX)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LFLAGS) $(MLXFLAG)

%.o: %.c
	$(CC) $(CFLAGS)  -c -o $@ $^

$(HDR):
		make -C $(DIR)

clean:
		make -C $(DIR) clean
		rm -f $(OBJ)

fclean:		clean
		make -C $(DIR) fclean
		make -C $(DIRMLX) clean
		rm -f $(NAME) $(HDR)

re:			fclean all

.PHONY: all clean fclean re
