#include "../so_long.h"

void	coins_exit_reachable_check(char **map, t_data *data)
{
	int		i;
	int		j;
	char	**copy;

	i = -1;
	copy = NULL;
	while (map[++i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				break ;
			j++;
		}
		if (map[i][j] == 'P')
			break ;
	}	
	height_map(data->map);
	copy = copy_map((int)ft_strlen(map[0]), height_map(data->map), data->map);
	flood_fill(copy, i, j);
	coins_left_after_fill(copy, data, height_map(data->map));
	flood_fill2(copy, i, j);
	exit_left_after_fill(copy, data, height_map(data->map));
	free_map_copy(copy, height_map(data->map));
}

void	exit_left_after_fill(char **map, t_data *data, int height)
{
	int	i;
	int	j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (map[i][j] != '\n' && map[i][j] != '\0')
		{
			if (map[i][j] == 'E')
			{	
				free_map_copy(map, height_map(data->map));
				error_display(data, "Error : oospy, exit's not reachable\n", 1);
			}
			j++;
		}
		i++;
	}
}

void	coins_left_after_fill(char **map, t_data *data, int height)
{
	int	i;
	int	j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (map[i][j] != '\n' && map[i][j] != '\0')
		{
			if (map[i][j] == 'C')
			{	
				free_map_copy(map, height_map(data->map));
				error_display(data,
					"Error : oospy, some coins are not reachable\n", 1);
			}
			j++;
		}
		i++;
	}
}
