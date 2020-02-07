# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llifeboa <llifeboa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 15:06:11 by bkerstin          #+#    #+#              #
#    Updated: 2020/02/02 21:40:13 by llifeboa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#    PROJECT    #
NAME = RTv1

#    DIRECTORIES    #
SRC_DIR = ./src/
LIB_DIR = ./libft/
OBJ_DIR = ./obj/
SRC_INC_DIR = ./includes/
LIB_INC_DIR = ./libft/includes
GL_INC_DIR =  ~/.brew/include/
GL_LIB_DIR =  ~/.brew/lib/

#    FLAGS    #
CFLGS =  -lglfw -lglew -framework OpenGL -O2 -Wall -Wextra -Werror
CFLGS_DBG =
LFLGS = -L$(LIB_DIR) -lft
CC = gcc

#    LIBFT    #
LIBFT = $(LIB_DIR)/libft.a

#	SHADER	#
SHADER_FRAG = src/shader/shader.frag
SHADER_SOURCE = src/shader/shader.source

#    SOURCES AND HEADERS    #
HEADER = includes/rtv1.h
SRC_FILES = main.c parser.c parse_obj.c uniform.c uniform_light.c uniform_sphere.c uniform_plane.c uniform_cone.c uniform_cylinder.c help.c validation.c camera.c init.c event_callback.c gl.c parse_light.c
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:%.c=%.o))

#    INCLUDES    #
INCL = -I $(GL_INC_DIR) -I $(SRC_INC_DIR) -I $(LIB_INC_DIR)

#    RULES    #
.PHONY: all clean fclean re compile_shader mkdir

all: $(NAME) $(SHADER_FRAG)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(SRC_INC_DIR) $(INCL) -O2 $(CFLGS_DBG)

$(LIBFT):
	@echo "${LBLUE}########## COMPILE LIBFT.A ##########${RESTORE}"
	@$(MAKE) -C $(LIB_DIR)

$(NAME): $(OBJ_DIR) $(OBJS) $(LIBFT) $(HEADER)
	$(CC) $(CFLGS) -o $(NAME) $(INCL) $(LFLGS) $(OBJS) -L $(GL_LIB_DIR)

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) -C $(LIB_DIR) clean

fclean: clean
	rm -rf $(NAME)
	rm -rf $(SHADER_FRAG)
	$(MAKE) -C $(LIB_DIR) fclean

re: fclean all

$(OBJ_DIR):
	@echo "${PURPLE}########## CREATE OBJ DIRECTORY ##########${RESTORE}"
	@mkdir -p $(OBJ_DIR)

$(SHADER_FRAG): $(SHADER_SOURCE)
	@echo "${PURPLE}########## COMPILE SHADER ##########${RESTORE}"
	@cat $(SHADER_SOURCE)| sed -E  's/^[[:space:]]*\/\/.*/ /g' | tr '\n' ' ' | sed -E 's/[[:space:]]+/ /g' > ./src/shader/shader.frag

#	COLORS	#
RESTORE = \033[0m

RED = \033[00;31m
GREEN = \033[00;32m
YELLOW = \033[00;33m
BLUE = \033[00;34m
PURPLE = \033[00;35m
CYAN = \033[00;36m
LIGHTGRAY = \033[00;37m

LRED = \033[01;31m
LGREEN = \033[01;32m
LYELLOW = \033[01;33m
LBLUE = \033[01;34m
LPURPLE = \033[01;35m
LCYAN = \033[01;36m
WHITE = \033[01;37m
