#include "../so_long.h"

void	free_map(t_data *data)
{
	int	j;

	j = -1;
	while (data->map[++j] != NULL)
	{
		free(data->map[j]);
	}
	free(data->map[j]);
	free(data->map);
}

void	free_map_copy(char **map, int height)
{
	int	j;

	j = 0;
	while (j < height)
	{
		free(map[j]);
		j++;
	}
	free(map);
}

void	error_display(t_data *data, char *msg, int map_free)
{
	ft_printf("%s", msg);
	if (map_free)
		free_map(data);
	exit(1);
}

void	map_malloc(t_data *data, char **av)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(av[1], 0);
	if (fd == -1)
		error_display(0, "Error : unable to open the map\n", 0);
	i = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
		{	
			i++;
			break ;
		}
		free(line);
		i++;
	}
	free(line);
	close(fd);
	data->map = malloc(sizeof(char *) * i);
	if (!data->map)
		error_display(data, "Error : failed malloc on data.map\n", 0);
}
