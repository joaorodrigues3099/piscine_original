/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:08:44 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/24 11:38:17 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	if (nb == 0)
		return (1);
	if (!nb)
		return (0);
	i = 1;
	n = nb;
	while (i != nb)
	{
		n *= (nb - i);
		i++;
	}
	return (n);
}
/*
int	main(void)
{
	printf("ft: %d", ft_interative_factorial(3));
	return (0);
}
*/