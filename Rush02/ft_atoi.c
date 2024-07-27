/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:56:07 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/27 10:50:54 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool	ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' 
	|| c == '\v' || c == '\f' || c == '\r')
		return (true);
	else
		return (false);
}

bool	ft_is_sign(char c)
{
	if (str[i] == '-' || str[i] == '+')
		return (true);
	else
		return (false);
}

int	ft_nbrlen(char	*str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (ft_is_nbr(str[i]))
		{
			j++;
			if (!ft_is_nbr(str[i + 1]))
				return (j);
		}
		i++;
	}
	return (NULL);
}

char	*ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	*result;

	if (!ft_nbrlen)
		return (NULL);
	*result = (char *)malloc(ft_nbrlen);
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	if (ft_is_sign(str[i]))
	{
		if (!ft_is_nbr(str[i + 1]))
			return (NULL);
		if (str[i] == '-')
			return (NULL);
		i++;
	}
	while (ft_is_nbr(str[i]))
	{
		result += (str[i] - 48);
		i++;
	}
	return (result);
}