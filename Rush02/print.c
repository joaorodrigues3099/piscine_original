/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:12:18 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/27 17:34:29 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_units(char n)
{
	int rmv;

	rmv = n;
	write(1, "nine ", 5);
}

void	ft_tens(char *buffer)
{
	if (buffer[0] < '2')
		write(1, "nineteen", 8);
	else
	{
		if (buffer[1] == '0')
			write(1, "ninety", 7);
		else
		{
			write(1, "ninety", 7);
			write(1, "-", 1);
			write(1, "nine", 4);
			write(1, " ", 1);
		}
	}
}

void	ft_hundreds(char *buffer)
{
	write(1, " nine", 5);
	write(1, " ", 1);
	write(1, "hundred", 7);
	write(1, " ", 1);
	if (buffer[1] != '0')
	{
		write(1, "and ", 4);
		ft_tens(buffer + 1);
	}
	else
		ft_units(buffer[2]);
}