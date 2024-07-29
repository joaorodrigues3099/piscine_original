/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:35:49 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/29 16:34:23 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_square(int s_width, int s_heigth)
{
	char	**square; //create grid solve
	
	square = (char **)malloc((width - 1) * (height - 1));
	if (!square)
		return (NULL);
	return (square);
}

bool	ft_check_obstacle(int obstacles, int start, int size)
{
	if (obstacles >= start && obstacles <= (start + size))
		return (true);
	return (false);
}

bool ft_no_obstacles(int **obstacles, int *square_start, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 2)
	{
		if (ft_check_obstacle(obstacles[i][j], square_start[j], size))
			return (false);
		i++;
		if (obstacles[j][i] == NULL)
		{
			i = 0;
			j++;
		}
	}
	return (true)
}

int	*ft_check_solve(int **obstacles, int *map_size, int square_size)
{
	int	i;
	int	*square_start;
	int	*square_end;

	square_start = (int *)malloc(3);
	if (!square_start)
		return (NULL);
	square_end = (int *)malloc(2);
	if (!square_end)
		return (NULL);
	square_start[0] = 0; //x
	square_start[1] = 0; //y
	square_start[2] = size;
	square_end[0] = size - 1;
	square_end[1] = size - 1 ;
	i = 0;
	while (square_end[0]++ <= map_size[0] && square_end[1]++ <= map_size[1])
	{
		ft_no_obstacles(obstacles, square_start, square_size);
			return(square_start);
		square_start[0]++;
		if (square_end[0] == map_width)
		{
			square_start[0] = 0;
			square_end[0] = size - 1;
			square_start[1]++;
		}
		if (size == 1)
			return (NULL);
	}
	return (ft_check_obstacle(obstacles, map_size, square_size - 1));
}

void	ft_set_obstacles(char **obstacles, int x_pos, int y_pos, int mat_pos)
{
	int	x_pos;
	int	y_pos;
	int	*pos;
	
	pos = (int *)malloc(2);
	while (map[x_pos][y_pos] != OBSTACLE)
	{
		x_pos++;
		if (x_pos == width)
		{
			x_pos = 0;
			y_pos++;
		}
	}
	pos[0] = x_pos;
	pos[1] = y_pos;
	obstacles[map_pos] = pos;
	free(pos);
	pos = NULL;
	if (!(y_pos == height && x_pos == width))
		ft_get_obstacle(map, x_pos++, y_pos, mat_pos++);
	return (obstacles);
}

int	main(int argc, char **argv)
{
	argv[1][0]
}