#include "../so_long.h"

void	map_filler(t_data *data, char **av)
{
	int	fd;
	int	j;

	fd = open(av[1], 0);
	if (fd == -1)
		error_display(0, "Error : unable to open the map\n", 0);
	j = 0;
	while (1)
	{
		data->map[j] = get_next_line(fd);
		if (data->map[j] == NULL)
			break ;
		j++;
	}
	close(fd);
	if (data->map[0] == NULL)
		error_display(data, "Error : map too small, where the map ?\n", 1);
	map_check_square(data);
	wall_check(data->map, data, height_map(data->map) - 1,
		ft_strlen(data->map[0]) - 2);
	map_check_size(data);
	map_param_check(data->map, data);
	coins_exit_reachable_check(data->map, data);
}
