# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szakaria <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 17:15:33 by szakaria          #+#    #+#              #
#    Updated: 2020/03/05 20:56:50 by szakaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
_lCYAN = \x1b[96m
_lYELLOW = \x1b[93m
_lGREEN = \x1b[92m
_lBLUE = \x1b[94m
_RED = \x1b[31m
_BOLD = \x1b[1m
_END = \x1b[0m
LIB = libft/libft.a
FILE  = fdf.c\
		bresn.c\
		key_hook.c\
		stock.c\
		main.c
all: $(NAME)
$(NAME):
	@cd libft && make && cd ..
	@gcc -o fdf -Wall -Werror -Wextra -I ./minilibx -lmlx -framework OpenGL -framework Appkit $(FILE) $(LIB) 
	@echo "\n$(_lGREEN) -> The Fdf was completed <-\n"

clean:
	@cd libft && make clean && cd ..
	@rm -f $(RESUL)
	@echo "$(_lGREEN) > make clean $(_END)"

fclean : clean
	@cd libft && make fclean && cd ..
	@rm -f $(NAME)
	@echo "$(_lGREEN) > make fclean $(_END)"

re: fclean all
	@echo "$(_lGREEN) > make re $(_END)"
