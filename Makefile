SYS := $(shell clang -dumpmachine)

CC			=	clang

NAME		=	wolf3d

LNAME		=	ft

DIR			=	lib$(LNAME)

HDR			=	$(DIR)/$(DIR).a

SRC			=	main.c				\
				parser.c			\
				init_struct.c		\
				print.c				\
				check_for_parser.c	\
				exit_prog.c			\

OBJ			=	$(patsubst %.c,srcs/%.o,$(SRC))

LFLAGS		=	-g -L$(DIR) -l$(LNAME)

WFLAGS 		=	-Wall -Wextra -Werror

CFLAGS1		=	$(WFLAGS) -I./includes/ -I./$(DIR)/includes
# -I./$(DIRMLX)

OFLAGS		=	 -g
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
