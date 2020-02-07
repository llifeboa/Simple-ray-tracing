# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llifeboa <llifeboa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/20 17:42:47 by bkerstin          #+#    #+#              #
#    Updated: 2020/02/02 21:39:57 by llifeboa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 # #    PROJECT    #
NAME=libft.a

# #    DIRECTORIES    #
INCL = -I ./includes/
SRC_DIR = ./src/
OBJ_DIR = ./obj/

# #    FLAGS    #
CFLAGS = -Wall -Wextra -Werror
CC = gcc

 #    SOURCES AND HEADERS    #
SRC = ft_isalpha.c ft_memccpy.c ft_strcpy.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_strlen.c ft_isalnum.c ft_isdigit.c ft_memset.c ft_strncpy.c ft_memmove.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putchar.c ft_putstr.c ft_putendl.c ft_atoi.c ft_strnew.c ft_memalloc.c ft_strdup.c ft_itoa.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_length_of_numbers.c ft_strstr.c ft_strcmp.c ft_strncmp.c ft_strnstr.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_memdel.c ft_memchr.c ft_isspace.c ft_memcmp.c ft_strclr.c ft_strchr.c ft_strrchr.c ft_strdel.c ft_strjoin.c ft_strsub.c ft_strequ.c ft_strnequ.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strtrim.c ft_strsplit.c get_next_line.c ft_abs.c ft_swap.c ft_atod.c
SRCS = $(addprefix $(SRC_DIR), $(SRC))
OBJS = $(addprefix $(OBJ_DIR), $(SRC:%.c=%.o))

all:		$(NAME)

mkdir:
			mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
			$(CC) $(CFLAGS) -c $< -o $@ $(INCL)

$(NAME):	mkdir $(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			rm -rf $(OBJ_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
 