#include "../so_long.h"

// void	set_assets2(t_data *data)
// {
// 	data->img.img_player_b = mlx_xpm_file_to_image(data->mlx_ptr,
// 			data->img.player_b, &(data->img.width), &(data->img.height));
// 	data->img.img_wall = mlx_xpm_file_to_image(data->mlx_ptr,
// 			data->img.wall, &(data->img.width), &(data->img.height));
// 	data->img.img_floor = mlx_xpm_file_to_image(data->mlx_ptr,
// 			data->img.floor, &(data->img.width), &(data->img.height));
// 	data->img.img_collect = mlx_xpm_file_to_image(data->mlx_ptr,
// 			data->img.collect, &(data->img.width), &(data->img.height));
// 	data->img.img_exitOK = mlx_xpm_file_to_image(data->mlx_ptr,
// 			data->img.exitOK, &(data->img.width), &(data->img.height));
// 	data->img.img_exitNO = mlx_xpm_file_to_image(data->mlx_ptr,
// 			data->img.exitNO, &(data->img.width), &(data->img.height));
// 	data->img.img_remains = mlx_xpm_file_to_image(data->mlx_ptr,
// 			data->img.remains, &(data->img.width), &(data->img.height));
// 	data->img.img_player_l = mlx_xpm_file_to_image(data->mlx_ptr,
// 			data->img.player_l, &(data->img.width), &(data->img.height));
// 	if (!data->img.img_wall || !data->img.img_player_b || !data->img.img_floor
// 		|| !data->img.collect || !data->img.img_exitOK || !data->img.exitNO
// 		|| !data->img.remains || !data->img.img_player_l)
// 	{
// 		free(data->mlx_ptr);
// 		error_display(data, "Error : mlx file to image fail\n", 1);
// 	}
// }
void	free_if_fail(t_data *data, int i, int win)
{
	while (i >= 0)
	{
		if(data->img.img[i])
			mlx_destroy_image(data->mlx_ptr, data->img.img[i]);
		i--;
	}
	if(win == 1)
	{
		free(data->win_ptr);
		mlx_loop_end(data->mlx_ptr);
	}
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	if(win == 0)
		error_display(data, "Error : mlx file to image failed\n", 1);
	error_display(data, "Error : mlx window failed", 1);
}
static void	img_setter(t_data *data)
{
	int	i;

	i = 0;
	while (i < END)
	{
		data->img.img[i] = mlx_xpm_file_to_image(data->mlx_ptr,
				data->img.img_asset[i], &(data->img.width), &(data->img.height));
		if (data->img.img[i] == NULL)
			free_if_fail(data, i, 0);
		
		i++;
	}
}
void	set_assets(t_data *data)
{
	data->img.height = 30;
	data->img.width = 30;
	data->img.img_asset[PLAYER] = "assets/vertopal.com_player2.xpm";
	data->img.img_asset[PLAYER_R] = "assets/vertopal.com_player_to_right.xpm";
	data->img.img_asset[PLAYER_L] = "assets/vertopal.com_player_to_left.xpm";
	data->img.img_asset[PLAYER_B] = "assets/vertopal.com_booty.xpm";
	data->img.img_asset[WALL] = "assets/vertopal.com_Tree.xpm";
	data->img.img_asset[FLOOR] = "assets/vertopal.com_Cheap.ground.xpm";
	data->img.img_asset[COIN] = "assets/vertopal.com_collect1.xpm";
	data->img.img_asset[EXITOK] = "assets/exitOK.xpm";
	data->img.img_asset[EXITNO] = "assets/exitNO.xpm";
	data->img.img_asset[REMAINS] = "assets/remains.xpm";	
	img_setter(data);
	
	// data->img.img[PLAYER] = mlx_xpm_file_to_image(data->mlx_ptr,
	// 		data->img.player, &(data->img.width), &(data->img.height));
	// data->img.img_player_r = mlx_xpm_file_to_image(data->mlx_ptr,
	// 		data->img.player_r, &(data->img.width), &(data->img.height));
	// if (!data->img.img_player || !data->img.img_player_r)
	// {
	// 	free(data->mlx_ptr);
	// 	error_display(data, "Error : mlx file to image fail\n", 1);
	// }
	// set_assets2(data);
}

int	escaping(t_data *data)
{
	int i;

	i = -1;
	ft_printf("Total number of moves : %d\n", data->moves);
	free_map(data);
	while(++i < END)
	{
		if(data->img.img[i])
			mlx_destroy_image(data->mlx_ptr, data->img.img[i]);
	}
	// mlx_destroy_image(data->mlx_ptr, data->img.img_floor);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_collect);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_player);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_player_b);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_player_l);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_player_r);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_exitOK);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_exitNO);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_wall);
	// mlx_destroy_image(data->mlx_ptr, data->img.img_remains);
	mlx_loop_end(data->mlx_ptr);
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	exit(1);
}
