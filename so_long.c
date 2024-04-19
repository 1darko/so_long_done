#include "so_long.h"

static void	map_starter(t_data *data)
{
	data->map = NULL;
	data->moves = 0;
	data->coins = 0;
}

int	main(int ac, char **av)
{
	t_data	data;

	map_starter(&data);
	if (!(ac == 2) && !(ber_check(av[1])))
		error_display(0, "Error\n", 0);
	map_malloc(&data, av);
	map_filler(&data, av);
	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
		error_display(&data, "Error : mlx_init failed\n", 1);
	window_size(&data);
	set_assets(&data);
	data.win_ptr = mlx_new_window(data.mlx_ptr,
	 		(data.win_width * data.img.width),
	 		(data.win_height * data.img.height), "so_long");
	if (!data.win_ptr)
		free_if_fail(&data, END - 1, 1);
	render(&data);
	mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &key_press, &data);
	mlx_hook(data.win_ptr, KeyRelease, KeyRelease, &key_release, &data);
	mlx_hook(data.win_ptr, 17, 0, &escaping, &data);
	mlx_loop(data.mlx_ptr);
	return (0);
}
