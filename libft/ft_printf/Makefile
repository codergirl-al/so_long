# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 10:27:31 by apeposhi          #+#    #+#              #
#    Updated: 2023/02/16 09:26:09 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#PROJECT

NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -rf
CLEAR	= @clear
CMP		= 1
AR			= ar rcs

# FILE
SRC		= ./ft_printf.c
OBJ		= $(SRC:.c=.o)

# LIBFT
LIBFT_NAME	= libft.a
LIBFT	= ..

# PRINT

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))

$(NAME):	$(OBJ)
			@make -C $(LIBFT)
			@$(AR) $(NAME) $(OBJ)
			@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

clean:
	@make clean -C $(LIBFT)
	$(RM) $(OBJ)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all

norm: $(SRC)
	$(shell norminette $(SRC) | grep Error)

.SILENT:
	all

.PHONY: 
	all libftmake clean fclean re