NAME = so_long
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
SRC = test.c \
	  $(UTILS_DIR)asset_tools.c \
	  $(UTILS_DIR)free_and_malloc.c \
	  $(UTILS_DIR)map_creations.c \
	  $(UTILS_DIR)misc.c \
	  $(UTILS_DIR)checkers2.c \
	  $(UTILS_DIR)checkers.c \
	  $(UTILS_DIR)keys.c \
	  $(UTILS_DIR)map_render.c \
	  $(UTILS_DIR)map_tools.c \
	  $(UTILS_DIR)render_moves.c \
	  $(GNL_DIR)get_next_line.c \
	  $(GNL_DIR)get_next_line_utils.c


OBJ = $(SRC:.c=.o)

# Path to mlx header files
MLX_INCLUDE = minilibx-linux/

# Path to utils directory
UTILS_DIR = utils/
PRINTF_DIR = $(UTILS_DIR)printf/
GNL_DIR = $(UTILS_DIR)gnl/

%.o: %.c
	$(CC) $(CFLAGS) -I$(MLX_INCLUDE) -I$(PRINTF_DIR) -I$(GNL_DIR) -c $< -o $@

$(NAME): $(OBJ)
	$(MAKE) -C $(PRINTF_DIR)
	$(CC) $(OBJ) $(PRINTF_DIR)libftprintf.a -L$(MLX_INCLUDE) -lmlx -L/usr/lib -lXext -lX11 -lm -lz -o $(NAME)

all: $(NAME)

clean:
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
