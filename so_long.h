/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakojic <dakojic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:47:16 by dakojic           #+#    #+#             */
/*   Updated: 2024/04/10 16:50:22 by dakojic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "utils/printf/ft_printf.h"
#include "minilibx-linux/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include <X11/X.h>
#include <X11/keysym.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h> 
# include "utils/gnl/get_next_line.h"

 typedef	struct s_pos
{
	int	x;
	int	y;
	int exit_x;
	int exit_y;
}	t_pos;

typedef struct s_img
{
	int		height;
	int		width;
	void	*img_floor;
	void	*img_player;
	void	*img_player_r;
	void	*img_player_l;
	void	*img_player_b;
	void	*img_exitOK;
	void	*img_exitNO;
	void	*img_wall;
	void	*img_collect;
	void	*img_remains;

	char *player;
	char *player_r;
	char *player_l;
	char *player_b;
	char *remains;
	char *floor;
	char *wall;
	char *collect;
	char *exitOK;
	char *exitNO;
}	t_img;

typedef struct s_data
{
	void *mlx_ptr;
	void *win_ptr;
	t_img	img;
	t_pos	pos;
	char 	**map;
	int		moves;
	int		coins;
	int		win_height;
	int		win_width;
	int move_holder;
} t_data;

// char	*get_next_line(int fd);
// size_t	ft_strlen(const char *str);
// //t_list	*lastnode(t_list *temp);
// int		check_newline(t_list *stash);
// void	stash_free(t_list *stash);
// void	stash_drop(t_list **stash);
// void	stash_filler(t_list **stash, char *buf, int bytes);
// void	read_to_stash(t_list **stash, int fd);
// void	linemalloc(t_list *stash, char **line);
// void	stash_to_line(t_list *stash, char **line);

void	set_assets(t_data *data);
void	free_map(t_data *data);
void	free_map_copy(char **map, int height);
int		escaping(t_data *data);
void	error_display(t_data *data, char *msg, int map_free);

//Moves
void	render_top(t_data *data, int pos_x, int pos_y);
void	render_bot(t_data *data, int pos_x, int pos_y);
void	render_left(t_data *data, int pos_x, int pos_y);
void	render_right(t_data *data, int pos_x, int pos_y);

//Key actions
int	key_press(int keysym, t_data *data);
int	key_release(int keysym, t_data *data);

void	window_size(t_data *data);
void	render_map(char symbol, int x, int y, t_data *data);
void	render(t_data *data);
void	map_malloc(t_data *data, char **av);
void	map_check_square(t_data *data);
void	map_check_size(t_data *data);
void	sign_check(int count[3], int cur[2], t_data *data, char **map);
void	map_param_check(char **map, t_data *data);
void flood_fill2(char **map, int i, int j);
void flood_fill(char **map, int i, int j);
int	height_map(char **map);
void exit_left_after_fill(char **map, t_data *data, int height);
void coins_left_after_fill(char **map, t_data *data, int height);
char	*ft_strdup(const char *s);
char **copy_map(int width, int height, char **map);
void coins_exit_reachable_check(char **map, t_data *data);
void	wall_check(char **map, t_data *data, int height, int len);
void map_filler(t_data *data, char **av);
int	ber_check(char *av);
size_t	ft_strlen(const char *str);
void	image(t_data *data, void *img, int x, int y);

#endif
