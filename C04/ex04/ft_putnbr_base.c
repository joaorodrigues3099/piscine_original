/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:27:16 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/23 17:15:06 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int	ft_swap(int *arr)
{
	int	i;
	int	j;
	int swap;
	int size;

	i = 0;
	size = ft_count(arr);
	j = size - 1;
	while (i < j)
	{
		swap = arr[i];
		arr[i] = arr[j - i];
		arr[j - i] = swap;
		i++;
	}
	return (size);
}

int	ft_count(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_arr(int nbr, char *base)
{
	int *arr;
	int i;
	int j;

	i = ft_count(base);
	j = 0;	
	while ((nbr / i) >= 0)
	{
		arr[j] = base[nbr % i];
		j++;
		if (nbr / i == 0)
			break ;
		nbr /= i;
	}
	return (arr);
}

bool	is_valid (char *str)
{
	if (str_count(str) < 2)
		return (false);
	
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	arr;
	int size;
	int sign;

	arr = ft_arr(nbr, base);
	sign = nbr;
	size = ft_swap(arr);
	if (sign < 0)
		write (1, '-', 1);
	write (1, ft_swap, size);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
}
*/