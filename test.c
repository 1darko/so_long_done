
#include "so_long.h"

/* ISSUES :

data->img.height et width sont redeveni a 20 quelque part alors qu'ils sont censes etre a 30 -- FIXED

*/

//  typedef	struct s_pos
// {
// 	int	x;
// 	int	y;
// 	int exit_x;
// 	int exit_y;
// }	t_pos;

// typedef struct imagewrapper
// {
// 	void	*img_ptr;
// 	char	*file_name;
// } imgwrp;

// typedef struct s_img
// {
// 	int		height;
// 	int		width;
// 	void	*img_floor;
// 	void	*img_player;
// 	void	*img_player_r;
// 	void	*img_player_l;
// 	void	*img_player_b;
// 	void	*img_exitOK;
// 	void	*img_exitNO;
// 	void	*img_wall;
// 	void	*img_collect;
// 	void	*img_remains;

// 	char *player;
// 	char *player_r;
// 	char *player_l;
// 	char *player_b;
// 	char *remains;
// 	char *floor;
// 	char *wall;
// 	char *collect;
// 	char *exitOK;
// 	char *exitNO;
// }	t_img;

// enum image_names
// {
// 	PLAYER,
// 	PLAYER_R,
// 	PLAYER_L,
// 	PLAYER_B,
// 	REMAINS,
// 	FLOOR,
// 	WALL,
// 	COLLECT,
// 	EXITOK,
// 	EXITNO,
	// //imgwrp images[12];
// };
// 	imgwrp	images[12];
// 	// imgwrp	player;
// 	// imgwrp	player_r;
// 	// imgwrp	player_l;
// 	// imgwrp	player_b;
// 	// imgwrp	remains;
// 	// imgwrp	floor;
// 	// imgwrp	wall;
// 	// imgwrp	collect;
// 	// imgwrp	exitOK;
// 	// imgwrp	exitNO;
// }				t_img;

// typedef struct s_data
// {
// 	void *mlx_ptr;
// 	void *win_ptr;
// 	t_img	img;
// 	t_pos	pos;
// 	char 	**map;
// 	int		moves;
// 	int		coins;
// 	int		win_height;
// 	int		win_width;
// 	int move_holder;
// } t_data;

// void	imgwrp_init(imgwrp *img, const char *name)
// {
// 	img->file_name = name;
// 	img->img_ptr = mlx_xpm_file_to_image(data->mlx_ptr, data->img.player,
// 			&(data->img.width), &(data->img.height));

// }

// Loc_setter
// ptr to img setter
// void	set_assets(t_data *data)
// {
// 	data->img.height = 30;	
// 	data->img.width = 30;
// 	data->img.player = "assets/vertopal.com_player2.xpm";
// 	data->img.player_r = "assets/vertopal.com_player_to_right.xpm";
// 	data->img.player_l = "assets/vertopal.com_player_to_left.xpm";
// 	data->img.player_b = "assets/vertopal.com_booty.xpm";
// 	data->img.wall = "assets/vertopal.com_Tree.xpm";
// 	data->img.floor = "assets/vertopal.com_Cheap.ground.xpm";
// 	data->img.collect = "assets/vertopal.com_collect1.xpm";
// 	data->img.exitOK = "assets/exitOK.xpm";
// 	data->img.exitNO = "assets/exitNO.xpm";
// 	data->img.remains = "assets/remains.xpm";
// 	data->img.img_player = mlx_xpm_file_to_image(data->mlx_ptr, data->img.player,
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_player_r = mlx_xpm_file_to_image(data->mlx_ptr, data->img.player_r,
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_player_l = mlx_xpm_file_to_image(data->mlx_ptr, data->img.player_l,
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_player_b = mlx_xpm_file_to_image(data->mlx_ptr, data->img.player_b,
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_wall = mlx_xpm_file_to_image(data->mlx_ptr, data->img.wall, 
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_floor = mlx_xpm_file_to_image(data->mlx_ptr, data->img.floor, 
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_collect = mlx_xpm_file_to_image(data->mlx_ptr, data->img.collect,
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_exitOK = mlx_xpm_file_to_image(data->mlx_ptr, data->img.exitOK,
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_exitNO = mlx_xpm_file_to_image(data->mlx_ptr, data->img.exitNO,
// 			&(data->img.width), &(data->img.height));
// 	data->img.img_remains = mlx_xpm_file_to_image(data->mlx_ptr, data->img.remains,
// 			&(data->img.width), &(data->img.height));
// }


// void	free_map(t_data *data)
// {
// 	int j;

// 	j = -1;
// 	while(data->map[++j] != NULL)
// 	{
// 		free(data->map[j]);
// 	}
// 	free(data->map[j]);
// 	free(data->map);
// }
// void	free_map_copy(char **map, int height)
// {
// 	int j;

// 	j = 0;
// 	while(j < height)
// 	{
// 		free(map[j]);
// 		j++;
// 	}
// 	free(map);
// }

// int	escaping(t_data *data)
// {
// 	free_map(data);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_floor);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_collect);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_player);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_player_b);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_player_l);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_player_r);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_exitOK);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_exitNO);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_wall);
// 	mlx_destroy_image(data->mlx_ptr, data->img.img_remains);
// 	mlx_loop_end(data->mlx_ptr);
// 	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
// 	mlx_destroy_display(data->mlx_ptr);
// 	free(data->mlx_ptr);	
// 	exit(1);
// }
// void	error_display(t_data *data, char *msg, int map_free)
// {
// 	ft_printf("%s", msg);
// 	if(map_free)
// 		free_map(data);
// 	exit(1);
// }
// size_t	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }
// t_list	*lastnode(t_list *temp)
// {
// 	if (!temp)
// 		return (0);
// 	while (temp && temp->next != NULL)
// 		temp = temp->next;
// 	return (temp);
// }
// int	check_newline(t_list *stash)
// {
// 	int		i;
// 	t_list	*temp;

// 	i = 0;
// 	if (stash == NULL)
// 		return (0);
// 	temp = lastnode(stash);
// 	while (temp->content[i])
// 	{
// 		if (temp->content[i] == '\n')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
// void	stash_free(t_list *stash)
// {
// 	t_list	*temp;
// 	t_list	*cur;

// 	cur = stash;
// 	while (cur)
// 	{
// 		free(cur->content);
// 		temp = cur->next;
// 		free(cur);
// 		cur = temp;
// 	}
// }
// void	stash_drop(t_list **stash)
// {
// 	t_list	*end;
// 	t_list	*new;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (stash_free(*stash));
// 	new->next = 0;
// 	end = lastnode(*stash);
// 	while (end->content[i] && end->content[i] != '\n')
// 		i++;
// 	if (end->content[i] && end->content[i] == '\n')
// 		i++;
// 	new->content = malloc(sizeof(char) *((ft_strlen(end->content) - i) + 1));
// 	if (!new->content)
// 		return (stash_free(*stash));
// 	while (end->content[i] != '\0')
// 		new->content[j++] = end->content[i++];
// 	new->content[j] = '\0';
// 	stash_free(*stash);
// 	*stash = new;
// }

// void	stash_filler(t_list **stash, char *buf, int bytes)
// {
// 	int		i;
// 	t_list	*temp;
// 	t_list	*end;

// 	i = 0;
// 	temp = malloc(sizeof(t_list));
// 	if (!temp)
// 		return ;
// 	temp->next = NULL;
// 	temp->content = malloc(sizeof(char) * (bytes + 1));
// 	if (!temp->content)
// 		return (free(temp));
// 	while (buf[i] && i < bytes)
// 	{
// 		temp->content[i] = buf[i];
// 		i++;
// 	}
// 	temp->content[i] = '\0';
// 	if (*stash == NULL)
// 		*stash = temp;
// 	else
// 	{
// 		end = lastnode(*stash);
// 		end->next = temp;
// 	}
// }
// void	read_to_stash(t_list **stash, int fd)
// {
// 	char	*buf;
// 	int		bytes;

// 	bytes = 1;
// 	while (!check_newline(*stash) && bytes > 0)
// 	{
// 		buf = malloc(sizeof(char) * (1 + 1));
// 		if (!buf)
// 			return ;
// 		bytes = (int)read(fd, buf, 1);
// 		if ((bytes == 0 && *stash == NULL) || bytes == -1)
// 		{
// 			free(buf);
// 			return ;
// 		}
// 		buf[bytes] = '\0';
// 		stash_filler(stash, buf, bytes);
// 		if (!stash)
// 		{
// 			free(buf);
// 			return ;
// 		}
// 		free(buf);
// 	}
// }
// void	linemalloc(t_list *stash, char **line)
// {
// 	int	i;
// 	int	len;

// 	len = 0;
// 	while (stash)
// 	{
// 		i = 0;
// 		while (stash->content[i] != '\0')
// 		{
// 			if (stash->content[i] == '\n')
// 			{
// 				len++;
// 				break ;
// 			}
// 			i++;
// 			len++;
// 		}
// 		stash = stash->next;
// 	}
// 	*line = malloc(sizeof(char) * (len + 1));
// }
// void	stash_to_line(t_list *stash, char **line)
// {
// 	int		j;
// 	int		k;
// 	t_list	*temp;

// 	j = 0;
// 	temp = stash;
// 	linemalloc(stash, line);
// 	if (*line == NULL)
// 		return ;
// 	while (temp)
// 	{
// 		k = 0;
// 		while (temp->content[k] != '\0')
// 		{
// 			if (temp->content[k] == '\n')
// 			{
// 				(*line)[j++] = temp->content[k];
// 				break ;
// 			}
// 			(*line)[j++] = temp->content[k++];
// 		}
// 		temp = temp->next;
// 	}
// 	(*line)[j] = '\0';
// }
// char	*get_next_line(int fd)
// {
// 	char			*line;
// 	static t_list	*stash;

// 	if (fd < 0 || 1 <= 0 || read(fd, 0, 0) < 0)
// 	{
// 		stash_free(stash);
// 		stash = NULL;
// 		return (NULL);
// 	}
// 	line = NULL;
// 	read_to_stash(&stash, fd);
// 	if (!stash)
// 		return (NULL);
// 	stash_to_line(stash, &line);
// 	if (stash == NULL)
// 		return (0);
// 	stash_drop(&stash);
// 	if (line[0] == '\0')
// 	{
// 		stash_free(stash);
// 		stash = NULL;
// 		free(line);
// 		return (NULL);
// 	}
// 	return (line);
// }
// int on_destroy(t_data *data)
// {
// 	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
// 	mlx_destroy_display(data->mlx_ptr);
// 	free(data->mlx_ptr);
// 	exit(0);
// 	return (0);
// }
 
// int on_keypress(int keysym, t_data *data)
// {
// 	(void)data;
// 	ft_printf("Pressed key: %d\n", keysym);
// 	return (0);
// }

// void exit_setter(t_data *data)
// {
// 	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
// 			data->img.img_exitOK, 
// 			data->pos.exit_x * data->img.width,
// 			data->pos.exit_y * data->img.height);
// 	data->map[data->pos.exit_y][data->pos.exit_x] = 'W';
// }



// int close_window(t_data *data)
// {	
// 	escaping(data);
// 	//A free tout ce qu'il faut free
// 	exit(0);
// }


// void	window_size(t_data *data)
// {
// 	int i;

// 	i = 0;
// 	while(data->map[0][i] != '\n')
// 	{
// 		i++;
// 	}
// 	data->win_width = i;
// 	i = 0;
// 	while(data->map[i] != NULL)
// 		i++;
// 	data->win_height = i;
// }
//Coins && Exit closed / OPEN missing
// void render_map(char symbol, int x, int y, t_data *data)
// {
// 	ft_printf("X est de %d et Y est de %d\n", x, y);
// 	if(symbol == '1')
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img.img_wall, x, y);
// 	else if(symbol == '0')
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img.img_floor, x, y);
// 	else if(symbol == 'P')
// 	{
// 		data->pos.x = x;
// 		data->pos.y = y;
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img.img_player, x, y);
// 	}
// 	else if(symbol == 'E')
// 	{	
// 		data->pos.exit_x = x / data->img.width;
// 		data->pos.exit_y = y / data->img.height;
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img.img_exitNO, x, y);
// 	}
// 	else if(symbol == 'C')
// 	{	
// 		data->coins += 1;
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img.img_collect, x, y);
// 	}
// 	// else
// 	// {
// 	// 	write(1, "Invalid map\n", 13);
// 	// 	exit(1);
// 	// }
// }
// void render(t_data *data)
// {
// 	int x;
// 	int y;

// 	x = 0;
// 	while(data->map[x])
// 	{
// 		y = 0;
// 		while(data->map[x][y] != '\n' && data->map[x][y] != '\0')
// 		{
// 			ft_printf("H : %d, W : %d", data->img.height, data->img.width);
// 			render_map(data->map[x][y], y * 30, x * 30, data);
// 			y++;
// 		}
// 		x++;
// 	}
// }

// void big_map_checker(t_data data)
// {



// }
// void map_malloc(t_data *data, char **av)
// {
// 	int i;
// 	char *line;
// 	int fd;
// 	fd = open(av[1], 0);
// 	if(fd == -1)
// 		error_display(0, "Error : unable to open the map\n", 0);	
// 	i = 0;
// 	while(1)
// 	{
// 		line = get_next_line(fd);
// 		if(line == NULL)
// 		{	
// 			i++;
// 			break ;
// 		}
// 		free(line);
// 		i++;
// 	}
// 	free(line);
// 	close(fd);
// 	data->map = malloc(sizeof(char *) * i);
// 	if (!data->map)
// 		error_display(data, "Error : failed malloc on data.map\n", 0);
// }
// void big_checker(t_data *data)
// {

// }





// void map_check_square(t_data *data)
// {
// 	int ref;
// 	int j;

// 	ref = (int)ft_strlen(data->map[0]);
// 	j = 1;
// 	while(data->map[j] != NULL)
// 	{	
// 		if(ref != (int)ft_strlen(data->map[j]) && data->map[j + 1])
// 			error_display(data, "Error : map not a square or rectangle\n", 1);
// 		if((((ref - (int)ft_strlen(data->map[j])) != 1)) && !data->map[j + 1])
// 			error_display(data, "Error : map not a square or rectangle\n", 1);
// 		j++;
// 	}
// }
// void map_check_size(t_data *data)
// {
// 	int len;

// 	len = ft_strlen(data->map[0]);
// 	if(len < 3 || data->map[0][1] == '\n' || data->map[0][2] == '\n')
// 		error_display(data, "Error : map too small\n", 1);
// 	len = 0;
// 	while(data->map[len] != NULL)
// 		len++;
// 	if(len < 3)
// 		error_display(data, "Error : map too small\n", 1);

// }
// void player_check(char **map, t_data *data)
// {
// 	int coin_count;
// 	int i;
// 	int j;

// 	i = -1;
// 	coin_count = 0;
// 	while(map[++i])
// 	{	
// 		j = 0;
// 		while(map[i][j] != '\n' && map[i][j] != '\0')
// 		{
// 			if(map[i][j] == 'C')
// 				coin_count++;
// 			j++;
// 		}
// 	}
// 	if(coin_count == 0)
// 		error_display(data, "Error : there is nothing for you to collect out there, go back to sleep !\n", 1);
// }
/*	int player_count	count[0];
	int exit_count;		count[1]		
	int coin_count;		count[2]

	int i				cur[0]
	int j				cur[1]
*/

// void	sign_check(int count[3], int cur[2], t_data *data, char **map)
// {
// 		cur[1] = 0;
// 		while(map[cur[0]][cur[1]] != '\n' && map[cur[0]][cur[1]] != '\0')
// 		{
// 			if (map[cur[0]][cur[1]] == 'P')
// 				count[0]++;
// 			else if (map[cur[0]][cur[1]] == 'E')
// 				++count[1];
// 			else if (map[cur[0]][cur[1]] == 'C')
// 				count[2]++;
// 			else if(map[cur[0]][cur[1]] != '\n' && map[cur[0]][cur[1]] != '0' && map[cur[0]][cur[1]] != '1')
// 				error_display(data, "Error : oops something aint right with the map !", 1);
// 			cur[1]++;
// 		}

// }


// void map_param_check(char **map, t_data *data)
// {
// 	int count[3];
// 	int	cur[2];

// 	cur[0] = -1;
// 	count[0] = 0;
// 	count[1] = 0;
// 	count[2] = 0;
// 	while(map[++cur[0]])
// 		sign_check(count, cur, data, map);
// 	if (count[0] != 1)
// 		error_display(data, "Error : wrong number of player(s)\n", 1);
// 	if (count[1] != 1)
// 			error_display(data, "Error : wrong number of exit(s)\n", 1);
// 	if (count[2] == 0)
// 		error_display(data, "Error : there is nothing for you to \"collect\" out there, go back to sleep !\n", 1);
// }
// void flood_fill2(char **map, int i, int j)
// {
// 	if(i < 1 || j < 1 || map[i][j] == '1' || map[i][j] == 'B')
// 		return ;
// 	printf("Il est sur %c\n", map[i][j]);
// 	map[i][j] = 'B';
// 	flood_fill2(map, i - 1, j);
// 	flood_fill2(map, i + 1, j);
// 	flood_fill2(map, i, j - 1);
// 	flood_fill2(map, i, j + 1);

	
// }
// void flood_fill(char **map, int i, int j)
// {
// 	if(i < 1 || j < 1 || map[i][j] == '1' || map[i][j] == 'E' || map[i][j] == 'F')
// 		return ;
// 	map[i][j] = 'F';
// 	flood_fill(map, i - 1, j);
// 	flood_fill(map, i + 1, j);
// 	flood_fill(map, i, j - 1);
// 	flood_fill(map, i, j + 1);

	
// }
// int	height_map(char **map)
// {
// 	int i;
// 	i = 0;
// 	while(map[i])
// 		i++;
// 	return (i);
// }
// void exit_left_after_fill(char **map, t_data *data, int height)
// {
// 	int i;
// 	int j;
// 	// printf("1 : %s\n2 : %s\n3 : %s", map[0], map[1],map[2]);
// 	// exit(1);
// 	i = 0;
// 	while(i < height)
// 	{
// 		j = 0;
// 		while(map[i][j] != '\n' && map[i][j] != '\0')
// 		{
// 			if(map[i][j] == 'E')
// 			{	
// 				free_map_copy(map, height_map(data->map));
// 				error_display(data, "Error : oospy, exit's not reachable\n", 1);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}

// }
// void coins_left_after_fill(char **map, t_data *data, int height)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	while(i < height)
// 	{
// 		j = 0;
// 		while(map[i][j] != '\n' && map[i][j] != '\0')
// 		{
// 			if(map[i][j] == 'C')
// 			{	
// 				free_map_copy(map, height_map(data->map));
// 				error_display(data, "Error : oospy, some coins are not reachable\n", 1);

// 			}
// 			j++;
// 		}
// 		i++;
// 	}

// }

// char	*ft_strdup(const char *s)
// {
// 	size_t	len;
// 	size_t	cur;
// 	char	*dup;
	
// 	if(!s)
// 		return (NULL);
// 	cur = 0;
// 	len = ft_strlen((char *)s);
// 	dup = (char *)malloc(sizeof(char) * len + 1);
// 	if (dup == 0)
// 		return (NULL);
// 	while (s[cur] != '\0')
// 	{
// 		dup[cur] = s[cur];
// 		cur++;
// 	}
// 	dup[cur] = '\0';
// 	return (dup);
// } 


// char **copy_map(int width, int height, char **map)
// {
// 	char **copy;
// 	int i;
// 	(void)width;
	
// 	copy = NULL;
// 	i = 0;
// 	copy = malloc(sizeof(char *) * height);
// 	while(i < height)
// 	{
// 		copy[i] = ft_strdup(map[i]);
// 		i++;
// 	}
// 	return (copy);
// }
// void coins_exit_check(char **map, t_data *data)
// {
// 	int i;
// 	int j;
// 	char **map_copy;
	
// 	i = -1;
// 	map_copy = NULL;
// 	while(map[++i])
// 	{
// 		j = 0;
// 		while(map[i][j])
// 		{
// 			if(map[i][j] == 'P')
// 				break ;
// 			j++;
// 		}
// 		if(map[i][j] == 'P')
// 			break ;
// 	}	
// 	height_map(data->map);
// 	map_copy = copy_map((int)ft_strlen(map[0]), height_map(data->map), data->map);

// 	flood_fill(map_copy, i, j);
// 	exit_left_after_fill(map_copy, data, height_map(data->map));
// 	free_map_copy(map_copy, height_map(data->map));
// }
// void coins_exit_reachable_check(char **map, t_data *data)
// {
// 	int i;
// 	int j;
// 	char **map_copy;
	
// 	i = -1;
// 	map_copy = NULL;
// 	while(map[++i])
// 	{
// 		j = 0;
// 		while(map[i][j])
// 		{
// 			if(map[i][j] == 'P')
// 				break ;
// 			j++;
// 		}
// 		if(map[i][j] == 'P')
// 			break ;
// 	}	
// 	height_map(data->map);
// 	map_copy = copy_map((int)ft_strlen(map[0]), height_map(data->map), data->map);

// 	flood_fill(map_copy, i, j);
// 	coins_left_after_fill(map_copy, data, height_map(data->map));
// 	flood_fill2(map_copy, i, j);
// 	exit_left_after_fill(map_copy, data, height_map(data->map));
// 	free_map_copy(map_copy, height_map(data->map));
// }
// void	wall_check(char **map, t_data *data, int height, int len)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	while(map[i] && i <= height)
// 	{
// 		printf("ICI %s\n", map[i]);
// 		j = 0;
// 		while(map[i][j] && j <= len)
// 		{
// 			printf("Le CHAR est %c et il est sur I : %d et J : %d\nHeight est a %d et len %d\n", map[i][j], i, j, height, len);
// 			if((i == 0 || i == height || j == 0 || j == len))
// 				if(map[i][j] != '1')
// 					error_display(data, "Error : there are some holes in your walls ! Open map.\n", 1);
// 			j++;
// 		}
// 		i++;
// 	}
// }
// void map_filler(t_data *data, char **av)
// {
// 	int fd;
// 	int j;

// 	fd = open(av[1], 0);
// 	if((fd == -1))	
// 		error_display(0, "Error : unable to open the map\n", 0);
// 	j = 0;
// 	while(1)
// 	{
// 		data->map[j] = get_next_line(fd);
// 		if(data->map[j] == NULL)
// 			break ;
// 		j++;
// 	}
// 	close(fd);
// 	if(data->map[0] == NULL)
// 		error_display(data, "Error : map too small, where the map ?\n", 1);
// 	map_check_square(data);
// 	wall_check(data->map, data, height_map(data->map) - 1, ft_strlen(data->map[0]) - 2);
// 	map_check_size(data);
// 	map_param_check(data->map, data);
// 	coins_exit_reachable_check(data->map, data);
// }

// int	ber_check(char *av)
// {
// 	int len = ft_strlen(av) - 1;
// 	if(av[len] == 'r' && av[len - 1] == 'e' && av[len - 2] == 'b' && av[len - 3] == '.')
// 		if(av[len - 4])
// 			return (1);
// 	return (0);
// }

int main(int ac, char **av)
{
	t_data data;
	data.map = NULL;
	data.moves = 0;
	data.coins = 0;
	if(!(ac == 2) && !(ber_check(av[1])))
		error_display(0, "Error\n", 0);
	map_malloc(&data, av);
	map_filler(&data, av);
	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
		error_display(&data, "Error : mlx_init failed\n", 1);
	window_size(&data);
	set_assets(&data);
	if(!data.map)
		escaping(&data);
	data.win_ptr = mlx_new_window(data.mlx_ptr, (data.win_width * data.img.width),
									(data.win_height * data.img.height), "so long");
	if (!data.win_ptr)
		escaping(&data);
	render(&data);
	mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &key_press, &data);
	mlx_hook(data.win_ptr, KeyRelease, KeyRelease, &key_release, &data);
	mlx_hook(data.win_ptr, 17, 0, &escaping, &data); // la croix de la fenetre 
	mlx_loop(data.mlx_ptr);		
	return (0);
}