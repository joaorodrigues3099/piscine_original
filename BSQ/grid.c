/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:30:40 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/29 16:43:07 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_create_grid(int grid_width, int grid_heigth)
{
	char	**grid;
	int	i;
	int	j;

	grid = (char **)malloc(grid_width * grid_heigth + 1);
	if (!grid)
		return (NULL);
	while (j < grid_heigth && i < grid_width)
	{
		grid[j][i] = '.';
		i++;
		if (i == grid_width)
		{
			i = 0;
			j++;
		}
	}
}

char	**ft_set_obstacles(char **grid)