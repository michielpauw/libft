# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpauw <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/06 17:41:17 by mpauw             #+#    #+#              #
#    Updated: 2018/03/26 12:03:25 by mpauw            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDES = libftprintf.h
SRCS = conv_char.c\
	   conv_dec.c\
	   conv_hex_oct.c\
	   conv_percent.c\
	   conv_pointer.c\
	   conv_string.c\
	   conv_w_string.c\
	   convert.c\
	   create_func_arr.c\
	   handle_min_width.c\
	   handle_precision.c\
	   init_conversion.c\
	   tools.c\
	   get_len_mod.c\
	   set_len_mod_dec.c\
	   set_len_mod_hex_oct.c
OBJ = $(SRCS:%.c=%.o)
LFTDIR = libft/
FT = ft
MAKE = make
FLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME): $(OBJ)
	-@ar rc $(NAME) $(OBJ) && ranlib $(NAME)
	-@echo "ft_printf Ready"

%.o: %.c $(INCLUDES)
	-@gcc $(FLAGS) -I$(LFTDIR) -c $(SRCS)

clean:
	-@/bin/rm -f $(OBJ)

fclean: clean
	-@/bin/rm -f $(NAME)

re: fclean all
