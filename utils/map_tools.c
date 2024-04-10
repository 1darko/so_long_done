#include "../so_long.h"

int	height_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

void	flood_fill2(char **map, int i, int j)
{
	if (i < 1 || j < 1 || map[i][j] == '1' || map[i][j] == 'B')
		return ;
	map[i][j] = 'B';
	flood_fill2(map, i - 1, j);
	flood_fill2(map, i + 1, j);
	flood_fill2(map, i, j - 1);
	flood_fill2(map, i, j + 1);
}

void	flood_fill(char **map, int i, int j)
{
	if (i < 1 || j < 1 || map[i][j] == '1'
		|| map[i][j] == 'E' || map[i][j] == 'F')
		return ;
	map[i][j] = 'F';
	flood_fill(map, i - 1, j);
	flood_fill(map, i + 1, j);
	flood_fill(map, i, j - 1);
	flood_fill(map, i, j + 1);
}

char	**copy_map(int width, int height, char **map)
{
	char	**copy;
	int		i;

	(void)width;
	copy = NULL;
	i = 0;
	copy = malloc(sizeof(char *) * height);
	while (i < height)
	{
		copy[i] = ft_strdup(map[i]);
		i++;
	}
	return (copy);
}
