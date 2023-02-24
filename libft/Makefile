# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 14:25:17 by apeposhi          #+#    #+#              #
#    Updated: 2023/01/17 11:26:40 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROJECT #
NAME	= libft.a
CC		= @clang
CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -f
FILE	= $(shell ls -lR src/ | grep -F .c | wc -l)
CMP		= 1
CLEAR	= @clear

SRC		= ./src/memory/ft_bzero.c\
	      ./src/check/ft_isalpha.c\
	      ./src/check/ft_isprint.c\
	      ./src/memory/ft_memcpy.c\
	      ./src/string/ft_strchr.c\
	      ./src/string/ft_strlcpy.c\
	      ./src/string/ft_strrchr.c\
	      ./src/memory/ft_calloc.c\
	      ./src/check/ft_isascii.c\
	      ./src/memory/ft_memchr.c\
	      ./src/memory/ft_memmove.c\
	      ./src/string/ft_strdup.c\
	      ./src/string/ft_strlen.c\
	      ./src/string/ft_tolower.c\
	      ./src/string/ft_atoi.c\
	      ./src/check/ft_isalnum.c\
	      ./src/check/ft_isdigit.c\
	      ./src/memory/ft_memcmp.c\
	      ./src/memory/ft_memset.c\
	      ./src/string/ft_strlcat.c\
	      ./src/string/ft_strnstr.c\
	      ./src/string/ft_toupper.c\
	      ./src/string/ft_strncmp.c\
	      ./src/string/ft_substr.c\
	      ./src/string/ft_strjoin.c\
	      ./src/string/ft_strtrim.c\
	      ./src/string/ft_split.c\
	      ./src/string/ft_itoa.c\
	      ./src/string/ft_strmapi.c\
	      ./src/string/ft_striteri.c\
	      ./src/print/ft_putchar_fd.c\
	      ./src/print/ft_putstr_fd.c\
	      ./src/print/ft_putendl_fd.c\
	      ./src/print/ft_putnbr_fd.c\
		  ./src/print/ft_putchar.c\
		  ./src/print/ft_putstr.c\
		  ./src/print/ft_puthexa.c\
		  ./src/print/ft_putnbr.c\
		  ./src/print/ft_putunsigned.c\
		  ./src/print/ft_putptr.c\
		  ./src/list/ft_lstnew.c\
		  ./src/list/ft_lstadd_front.c\
		  ./src/list/ft_lstsize.c\
		  ./src/list/ft_lstlast.c\
		  ./src/list/ft_lstadd_back.c\
		  ./src/list/ft_lstdelone.c\
		  ./src/list/ft_lstclear.c\
		  ./src/list/ft_lstiter.c\
		  ./src/list/ft_lstmap.c\

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.SILENT:
	all
.PHONY: 
	all clean fclean re