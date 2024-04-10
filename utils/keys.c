#include "../so_long.h"

int	key_press(int keysym, t_data *data)
{
	if (keysym == XK_Escape)
		escaping(data);
	if (keysym == XK_w || keysym == XK_Up)
		image(data, data->img.img_player_b, data->pos.x, data->pos.y);
	if (keysym == XK_s || keysym == XK_Down)
		image(data, data->img.img_player, data->pos.x, data->pos.y);
	if (keysym == XK_a || keysym == XK_Left)
		image(data, data->img.img_player_l, data->pos.x, data->pos.y);
	if (keysym == XK_d || keysym == XK_Right)
		image(data, data->img.img_player_r, data->pos.x, data->pos.y);
	return (0);
}

int	key_release(int keysym, t_data *data)
{
	int	move_holder;
	int	pos_x;
	int	pos_y;

	move_holder = data->moves;
	pos_x = data->pos.x / data->img.width;
	pos_y = data->pos.y / data->img.height;
	if (keysym == XK_w || keysym == XK_Up)
		render_top(data, pos_x, pos_y);
	if (keysym == XK_s || keysym == XK_Down)
		render_bot(data, pos_x, pos_y);
	if (keysym == XK_a || keysym == XK_Left)
		render_left(data, pos_x, pos_y);
	if (keysym == XK_d || keysym == XK_Right)
		render_right(data, pos_x, pos_y);
	if (move_holder != data->moves)
		ft_printf("Move number : %d\n", data->moves);
	return (0);
}
