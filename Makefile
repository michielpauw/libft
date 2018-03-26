# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpauw <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 11:06:44 by mpauw             #+#    #+#              #
#    Updated: 2018/03/26 13:45:33 by mpauw            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c\
	  ft_bzero.c\
	  ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_itoa.c\
	  ft_memalloc.c\
	  ft_memccpy.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memdel.c\
	  ft_memmove.c\
	  ft_memset.c\
	  ft_putchar.c\
	  ft_putchar_fd.c\
	  ft_putendl.c\
	  ft_putendl_fd.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_putstr.c\
	  ft_putstr_fd.c\
	  ft_int_to_base.c\
	  ft_strcat.c\
	  ft_strset.c\
	  ft_strchr.c\
	  ft_strclr.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strdel.c\
	  ft_strdup.c\
	  ft_strequ.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strjoin.c\
	  ft_strlcat.c\
	  ft_strlen.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strncat.c\
	  ft_strncmp.c\
	  ft_strncpy.c\
	  ft_strnequ.c\
	  ft_strnew.c\
	  ft_strnstr.c\
	  ft_strrchr.c\
	  ft_strsplit.c\
	  ft_strstr.c\
	  ft_realloc.c\
	  ft_strsub.c\
	  ft_strtrim.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_lstnew.c\
	  ft_lstdelone.c\
	  ft_char_bytes.c\
	  ft_lstdel.c\
	  ft_lstadd.c\
	  ft_lstiter.c\
	  ft_lstmap.c\
	  ft_numlen.c\
	  ft_brace_content.c\
	  ft_lstaddnewr.c\
	  ft_lstaddnewl.c\
	  ft_lstaddright.c\
	  ft_power.c\
	  ft_factorial.c\
	  ft_sqrt.c\
	  ft_next_prime.c\
	  ft_factorization.c\
	  ft_isprime.c\
	  ft_convert_base.c\
	  ft_sqrt_fl.c\
	  ft_sqrt_cl.c\
	  get_next_line.c\
	  ft_atod.c\
	  ft_free_array.c\
	  ft_3v_dot_product.c\
	  ft_get_3v_size.c\
	  ft_3v_add.c\
	  ft_3v_subtract.c\
	  ft_get_3v_unit.c\
	  ft_make_3v_unit.c\
	  ft_cross_product.c\
	  ft_3v_scalar.c\
	  ft_rotate_3v.c\
	  ft_init_3v.c\
	  ft_zero_3v.c\
	  ft_printf.c
OBJ = $(SRC:%.c=%.o)
NAME = libft.a
PRINTFDIR = ft_printf/
PRINTF = libftprintf.a
FLAGS = -Wall -Wextra -Werror
INCLUDE_HEADER = -I.

all: $(NAME)

$(NAME): $(OBJ) $(PRINTFDIR)$(PRINTF) 
	-@ar rc $(NAME) $(OBJ) && ranlib $(NAME)
	-@libtool -static -o $(NAME) $(PRINTFDIR)$(PRINTF) $(OBJ)
	-@echo "Libft ready"

%.o: %.c $(INCLUDES)
	-@gcc -ggdb $(FLAGS) $(INCLUDE_HEADER) $(FLAGS) -c $(SRC)

$(PRINTFDIR)$(PRINTF):
	$(MAKE) -C $(PRINTFDIR) $({PRINTF)

clean:
	-@/bin/rm -f $(OBJ)
	-@$(MAKE) -C $(PRINTFDIR) clean

fclean: clean
	-@/bin/rm -f $(NAME)
	-@$(MAKE) -C $(PRINTFDIR) fclean

re: fclean all
