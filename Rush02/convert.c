/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:35:20 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/27 17:34:14 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_units(char n);
void	ft_tens(char *buffer);
void	ft_hundreds(char *buffer);

void	ft_block(char *buffer, int size)
{
	if (size == 1)
		ft_units(buffer[0]);
	if (size == 2)
		ft_tens(buffer);
	if (size == 3)
		ft_hundreds(buffer);
}

int	ft_factorial(int i)
{
	int	j;

	j = 0;
	while (i > 0)
	{
		j *= 1000;
		i--;
	}
	return (j);
}

void	ft_convert(char *buffer, int size)
{
	int	dig;
	
	dig = (size % 3);
	if (dig == 0)
		dig = 3;
	printf("dig: %d\n", dig);
	if (((size - 1) / 3) > 0)
	{
		ft_block(buffer, dig);
		write(1, " thousand, ", 10);
		ft_convert(buffer + dig, size - dig);
	}
	ft_block(buffer, size);
}
