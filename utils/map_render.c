#include "../so_long.h"

void	image(t_data *data, void *img, int x, int y)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, img, x, y);
}

void	render_map(char symbol, int x, int y, t_data *data)
{
	if (symbol == '1')
		image(data, data->img.img_wall, x, y);
	else if (symbol == '0')
		image(data, data->img.img_floor, x, y);
	else if (symbol == 'P')
	{
		data->pos.x = x;
		data->pos.y = y;
		image(data, data->img.img_player, x, y);
	}
	else if (symbol == 'E')
	{	
		data->pos.exit_x = x / data->img.width;
		data->pos.exit_y = y / data->img.height;
		image(data, data->img.img_exitNO, x, y);
	}
	else if (symbol == 'C')
	{	
		data->coins += 1;
		image(data, data->img.img_collect, x, y);
	}
}

void	render(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	while (data->map[x])
	{
		y = 0;
		while (data->map[x][y] != '\n' && data->map[x][y] != '\0')
		{
			render_map(data->map[x][y], y * 30, x * 30, data);
			y++;
		}
		x++;
	}
}
