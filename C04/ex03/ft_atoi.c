/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:56:07 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/24 11:09:56 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

bool	ft_is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\a' || str[i] == '\b' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (ft_is_nbr(str[i]))
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	if (sign % 2 != 0)
		result = -result;
	return (result);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("String: %s\n", argv[1]);
		printf("Atoi: %d\n", ft_atoi(argv[1]));
	}
}
*/