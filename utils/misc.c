#include "../so_long.h"

void	window_size(t_data *data)
{
	int	i;

	i = 0;
	while (data->map[0][i] != '\n')
	{
		i++;
	}
	data->win_width = i;
	i = 0;
	while (data->map[i] != NULL)
		i++;
	data->win_height = i;
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	cur;
	char	*dup;

	if (!s)
		return (NULL);
	cur = 0;
	len = ft_strlen((char *)s);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (dup == 0)
		return (NULL);
	while (s[cur] != '\0')
	{
		dup[cur] = s[cur];
		cur++;
	}
	dup[cur] = '\0';
	return (dup);
}

int	ber_check(char *av)
{
	int	len;

	len = ft_strlen(av) - 1;
	if (av[len] == 'r' && av[len - 1] == 'e'
		&& av[len - 2] == 'b' && av[len - 3] == '.')
		if (av[len - 4])
			return (1);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
