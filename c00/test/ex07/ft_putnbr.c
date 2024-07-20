/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:39:52 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/14 20:44:49 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char w)
{
	write(1, &w, 1);
}

void	ft_putnbr(int nb)
{
	char	arr[12];
	int		i;

	i = 0;
	if (nb == 0)
	{
		ft_putchar(48);
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar(45);
	}
	while (nb > 0)
	{
		arr[i++] = '0' + nb % 10;
		nb /= 10;
	}
	while (i > 0)
	{
		ft_putchar(arr[i - 1]);
		i--;
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483647);
	return (0);
}
*/
