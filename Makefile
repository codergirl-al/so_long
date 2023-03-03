# NAME		= so_long
# NAME_BONUS	= so_long_bonus
# CC			= cc
# CFLAGS		= -Wall -Wextra -Werror
# RM			= @rm -rf
# AR			= ar rcs

# # LIBRARIES
# LIBFT		= libft/libft.a
# MLX42		= MLX42/build/libmlx42.a
# FRAMEWORK	= -framework Cocoa -framework OpenGL -framework IOKit
# GLFW3		= -lglfw -L"/opt/homebrew/Cellar/glfw/3.3.8/lib/"

# # FILES
# SRC		= src/main.c
# # B_SRC	= #src_b/main.c src_b/utils.c
# OBJ		= $(SRC:.c=.o)
# # B_OBJ	= $(B_SRC:.c=.o)

# # SO_LONG
# all: $(NAME) 

# $(NAME): $(OBJ)
# 	# cd libft && make
# 	@make -C MLX42
# 	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(MLX42) -Iinclude $(GLFW3) $(FRAMEWORK) -o $(NAME)

# # bonus: $(B_OBJ)
# # 	@make -C ./libft
# # 	@make -C ./MLX42
# # 	$(CC) $(CFLAGS) $(B_OBJ) $(LIBFT) $(MLX42) -lglfw -L $(GLFW3) $(FRAMEWORK) -o $(NAME_BONUS)

# # fcleanb:
# # 	@$(RM) $(B_OBJ) ${NAME_BONUS}

# # reb: fcleanb bonus 

# clean:
# 	@make clean -C libft/
# 	@make clean -C MLX42/
# 	- @$(RM) $(OBJ) $(B_OBJ)

# fclean: clean
# 	@make fclean -C libft/
# 	@make fclean -C MLX42/
# 	$(RM) ${NAME}

# re: fclean all

# norm: $(SRC)
# 	$(shell norminette $(SRC) | grep Error)

# .SILENT:
# 	all

# .PHONY: 
# 	all clean fclean re

AUTHORS		=	apeposhi
DATE		=	$$(date +%Y/%m/%d)
BUSER 		=	~/.brew/opt/glfw/lib/

CC			=	cc
CFLAGS		=	-Werror -Wextra -Wall

NAME 		=	so_long

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	include/
LIBA 		=	MLX42/build/libmlx42.a
LIBFT		=	libft/libft.a

SRC_NAME	=	main
INC_NAME	=	so_long

SRC_FILES	=	$(addsuffix .c, $(addprefix $(SRC_DIR), $(SRC_NAME)))
OBJ_FILES	=	$(addsuffix .o, $(addprefix $(OBJ_DIR), $(SRC_NAME)))
INC_FILES	=	$(addsuffix .h, $(addprefix $(INC_DIR), $(INC_NAME)))

ifeq ($(shell uname -s),Linux)
	OS := Linux
	LIB	=	-ldl -lglfw -pthread -lm
else ifeq ($(shell uname -s),Darwin)
	OS := MacOS
	LIB		=	-framework Cocoa -framework OpenGL -framework IOKit -lglfw -L ~/.brew/opt/glfw/lib/
else
	OS := Unknown
	exit 1
endif

$(info Compiling for $(OS))

all : $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -I$(INC_DIR) -o $@ -IMLX42/include
#
$(NAME) : $(OBJ_DIR) $(OBJ_FILES) $(INC_FILES) 
	@make -C ./libft
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME) $(LIBA) $(LIB) -I$(INC_DIR)

clean:
	cd libft && make clean
	@rm -rf $(OBJ_DIR)

fclean: clean
	cd libft && make fclean
	@rm -f $(NAME) .header

re: fclean all