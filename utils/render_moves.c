#include "../so_long.h"

static void	exit_setter(t_data *data)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->img.img[EXITOK],
		data->pos.exit_x * data->img.width,
		data->pos.exit_y * data->img.height);
	data->map[data->pos.exit_y][data->pos.exit_x] = 'W';
}

void	render_top(t_data *data, int pos_x, int pos_y)
{
	if (data->pos.y - data->img.height >= 0)
	{	
		if (data->map[pos_y - 1][pos_x] != '1'
			&& data->map[pos_y - 1][pos_x] != 'E')
		{	
			data->moves += 1;
			if (data->map[pos_y][pos_x] != 'X')
				image(data, data->img.img[FLOOR], data->pos.x, data->pos.y);
			else
				image(data, data->img.img[REMAINS], data->pos.x, data->pos.y);
			data->pos.y = data->pos.y - data->img.height;
			if (data->map[pos_y - 1][pos_x] == 'C')
			{
				data->coins -= 1;
				if (data->coins == 0)
					exit_setter(data);
				data->map[pos_y - 1][pos_x] = 'X';
			}
			if (data->map[pos_y - 1][pos_x] == 'W')
				escaping(data);
			image(data, data->img.img[PLAYER_B], data->pos.x, data->pos.y);
		}
	}
}

void	render_bot(t_data *data, int pos_x, int pos_y)
{
	if (data->pos.y + data->img.height < data->win_height * data->img.height)
	{
		if (data->map[pos_y + 1][pos_x] != '1'
			&& data->map[pos_y + 1][pos_x] != 'E')
		{
			data->moves += 1;
			if (data->map[pos_y][pos_x] != 'X')
				image(data, data->img.img[FLOOR], data->pos.x, data->pos.y);
			else
				image(data, data->img.img[REMAINS], data->pos.x, data->pos.y);
			data->pos.y = data->pos.y + data->img.height;
			if (data->map[pos_y + 1][pos_x] == 'C')
			{
				data->coins -= 1;
				if (data->coins == 0)
					exit_setter(data);
				data->map[pos_y + 1][pos_x] = 'X';
			}
			if (data->map[pos_y + 1][pos_x] == 'W')
				escaping(data);
			image(data, data->img.img[PLAYER], data->pos.x, data->pos.y);
		}
	}
}

void	render_left(t_data *data, int pos_x, int pos_y)
{
	if (data->pos.x - data->img.width >= 0)
	{
		if (data->map[pos_y][pos_x - 1] != '1'
			&& data->map[pos_y][pos_x - 1] != 'E')
		{
			data->moves += 1;
			if (data->map[pos_y][pos_x] != 'X')
				image(data, data->img.img[FLOOR], data->pos.x, data->pos.y);
			else
				image(data, data->img.img[REMAINS], data->pos.x, data->pos.y);
			data->pos.x = data->pos.x - data->img.width;
			if (data->map[pos_y][pos_x - 1] == 'C')
			{
				data->coins -= 1;
				if (data->coins == 0)
					exit_setter(data);
				data->map[pos_y][pos_x - 1] = 'X';
			}
			if (data->map[pos_y][pos_x - 1] == 'W')
				escaping(data);
			image(data, data->img.img[PLAYER_L], data->pos.x, data->pos.y);
		}
	}
}

void	render_right(t_data *data, int pos_x, int pos_y)
{
	if (data->pos.x + data->img.width < data->win_width * data->img.width)
	{
		if (data->map[pos_y][pos_x + 1] != '1'
			&& data->map[pos_y][pos_x + 1] != 'E')
		{
			data->moves += 1;
			if (data->map[pos_y][pos_x] != 'X')
				image(data, data->img.img[FLOOR], data->pos.x, data->pos.y);
			else
				image(data, data->img.img[REMAINS], data->pos.x, data->pos.y);
			data->pos.x = data->pos.x + data->img.width;
			if (data->map[pos_y][pos_x + 1] == 'C')
			{
				data->coins -= 1;
				if (data->coins == 0)
					exit_setter(data);
				data->map[pos_y][pos_x + 1] = 'X';
			}
			if (data->map[pos_y][pos_x + 1] == 'W')
				escaping(data);
			image(data, data->img.img[PLAYER_R], data->pos.x, data->pos.y);
		}
	}
}
