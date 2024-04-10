#include "../so_long.h"

void	sign_check(int count[3], int cur[2], t_data *data, char **map)
{
	cur[1] = 0;
	while (map[cur[0]][cur[1]] != '\n' && map[cur[0]][cur[1]] != '\0')
	{
		if (map[cur[0]][cur[1]] == 'P')
			count[0]++;
		else if (map[cur[0]][cur[1]] == 'E')
			++count[1];
		else if (map[cur[0]][cur[1]] == 'C')
			count[2]++;
		else if (map[cur[0]][cur[1]] != '\n'
				&& map[cur[0]][cur[1]] != '0' && map[cur[0]][cur[1]] != '1')
			error_display(data,
				"Error : oops something aint right with the map !", 1);
		cur[1]++;
	}
}

void	wall_check(char **map, t_data *data, int height, int len)
{
	int	i;
	int	j;

	i = 0;
	while (map[i] && i <= height)
	{
		j = 0;
		while (map[i][j] && j <= len)
		{
			if ((i == 0 || i == height || j == 0 || j == len))
				if (map[i][j] != '1')
					error_display(data,
						"Error: there are some holes in your walls! Open map.\n",
						1);
			j++;
		}
		i++;
	}
}

void	map_param_check(char **map, t_data *data)
{
	int	count[3];
	int	cur[2];

	cur[0] = -1;
	count[0] = 0;
	count[1] = 0;
	count[2] = 0;
	while (map[++cur[0]])
		sign_check(count, cur, data, map);
	if (count[0] != 1)
		error_display(data, "Error : wrong number of player(s)\n", 1);
	if (count[1] != 1)
		error_display(data, "Error : wrong number of exit(s)\n", 1);
	if (count[2] == 0)
		error_display(data,
			"Error :there is nothing for you to \"collect\" out there !\n", 1);
}

void	map_check_square(t_data *data)
{
	int	ref;
	int	j;

	ref = (int)ft_strlen(data->map[0]);
	j = 1;
	while (data->map[j] != NULL)
	{	
		if (ref != (int)ft_strlen(data->map[j]) && data->map[j + 1])
			error_display(data, "Error : map not a square or rectangle\n", 1);
		if ((((ref - (int)ft_strlen(data->map[j])) != 1)) && !data->map[j + 1])
			error_display(data, "Error : map not a square or rectangle\n", 1);
		j++;
	}
}

void	map_check_size(t_data *data)
{
	int	len;

	len = ft_strlen(data->map[0]);
	if (len < 3 || data->map[0][1] == '\n' || data->map[0][2] == '\n')
		error_display(data, "Error : map too small\n", 1);
	len = 0;
	while (data->map[len] != NULL)
		len++;
	if (len < 3)
		error_display(data, "Error : map too small\n", 1);
}
