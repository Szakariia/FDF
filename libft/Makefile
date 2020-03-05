# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdardari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 17:19:21 by hdardari          #+#    #+#              #
#    Updated: 2019/06/20 15:52:55 by szakaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
INCLUDE=libft.h
OBJ = ./*o
SRC = ft_lstnew.c\
		ft_putstr.c\
		ft_strncat.c\
		ft_atoi.c\
		ft_memalloc.c\
		ft_putstr_fd.c\
		ft_strncmp.c\
		ft_bzero.c \
		ft_memccpy.c \
		ft_strcat.c \
		ft_strncpy.c\
		ft_isalnum.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strnequ.c\
		ft_isalpha.c \
		ft_memcmp.c \
		ft_strclr.c \
		ft_strnew.c\
		ft_isascii.c \
		ft_memcpy.c \
		ft_strcmp.c \
		ft_strnstr.c\
		ft_isdigit.c \
		ft_memdel.c \
		ft_strcpy.c \
		ft_strrchr.c\
		ft_isprint.c \
		ft_memmove.c \
		ft_strdel.c \
		ft_strsplit.c\
		ft_iterative_factorial.c \
		ft_memset.c \
		ft_strdup.c \
		ft_strstr.c\
		ft_itoa.c \
		ft_numlen.c \
		ft_strequ.c \
		ft_strsub.c\
		ft_letcount.c \
		ft_print_int_list.c \
		ft_striter.c \
		ft_strtrim.c\
		ft_listlenght.c \
		ft_putchar.c \
		ft_striteri.c \
		ft_swap.c\
		ft_lstadd.c \
		ft_putchar_fd.c \
		ft_strjoin.c \
		ft_tolower.c\
		ft_lstdel.c \
		ft_putendl.c \
		ft_strlcat.c \
		ft_toupper.c\
		ft_lstdelone.c \
		ft_putendl_fd.c \
		ft_strlen.c \
		ft_wordcount.c\
		ft_lstiter.c \
		ft_putnbr.c \
		ft_strmap.c  \
		ft_lstmap.c \
		ft_putnbr_fd.c \
		ft_strmapi.c

all: $(NAME)
$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) -I $(INCLUDE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f *.o

fclean: clean 
	@rm -f $(NAME)

re: fclean all

